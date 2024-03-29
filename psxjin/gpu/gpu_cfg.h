/***************************************************************************
                          cfg.h  -  description
                             -------------------
    begin                : Sun Oct 28 2001
    copyright            : (C) 2001 by Pete Bernert
    email                : BlackDove@addcom.de
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version. See also the license.txt file for *
 *   additional informations.                                              *
 *                                                                         *
 ***************************************************************************/

//*************************************************************************//
// History of changes:
//
// 2001/10/28 - Pete
// - generic cleanup for the Peops release
//
//*************************************************************************//

#ifndef _GPU_CFG_H_
#define _GPU_CFG_H_

void ReadConfig(void);
void WriteConfig(void);
void ReadWinSizeConfig(void);


BOOL CALLBACK SoftDlgProc(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam );

#endif // _GPU_CFG_H_

