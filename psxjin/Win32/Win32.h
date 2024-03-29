/*  PSXjin - Pc Psx Emulator
 *  Copyright (C) 1999-2003  PSXjin Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __WIN32_H__
#define __WIN32_H__



#define VK_OEM_PLUS 0xBB
#define VK_OEM_COMMA 0xBC
#define VK_OEM_MINUS 0xBD
#define VK_OEM_PERIOD 0xBE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <windows.h>
#include <commctrl.h>
#include <ctype.h>
#include <io.h>
#include <direct.h>
#include "PsxCommon.h"

#ifndef strcasecmp
#define strcasecmp _stricmp
#endif

extern AppData gApp;
extern HANDLE hConsole;

extern long LoadCdBios;
extern int StatesC;
extern int AccBreak;
extern int NeedReset;
extern int ConfPlug;
extern int CancelQuit;
extern int Running;
extern char PSXjinDir[256];

LRESULT WINAPI MainWndProc(HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK ConfigureMcdsDlgProc(HWND hW, UINT uMsg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK ConfigureCpuDlgProc(HWND hW, UINT uMsg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK ConfigureNetPlayDlgProc(HWND hW, UINT uMsg, WPARAM wParam, LPARAM lParam);

HWND GetMainWindow();
void ConfigurePlugins(HWND hWnd);

extern int MainWindow_wndx;
extern int MainWindow_wndy;
extern int MainWindow_width;
extern int MainWindow_height;
extern int MainWindow_menubar;

int  Open_File_Proc(char *file);
void Open_Mcd_Proc(HWND hW, int MCDID);
void CreateMainWindow(int nCmdShow);
void RunGui();
void PADhandleKey(int key);

void LoadConfig();
void SaveConfig();

void UpdateMenuSlots();
void ResetMenuSlots();

void CreateMemPoke();
void ResetGame();
void UpdateToolWindows();

// maphkeys.c
extern HWND hMHkeysDlg;
int MHkeysUpdate();
int MHkeysCreate();
int MHkeysListMake(int bBuild);

// cheats
void CreateCheatEditor();
void MemSearchCommand(int command);

void WIN32_LoadState(int newState);
void WIN32_SaveState(int newState);
extern int iSaveStateTo;
extern int iLoadStateFrom;
extern int iCallW32Gui;
extern char szCurrentPath[256];

void WIN32_StartMovieReplay(char* szFilenanme);
void WIN32_StartMovieRecord();
void WIN32_StartAviRecord();
void WIN32_StopAviRecord();
void WIN32_LuaRunScript();

#endif /* __WIN32_H__ */
