/*
 * Copyright (c) 2005 Massachusetts Institute of Technology
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/* $Id$ */

#ifndef __KHIMAIRA_MAINWND_H
#define __KHIMAIRA_MAINWND_H

#define KHUI_MAIN_WINDOW_CLASS  L"KhmMainWindowClass"
#define KHUI_NULL_WINDOW_CLASS  L"KhmNullWindowClass"

extern ATOM khm_main_window_class;
extern HWND khm_hwnd_main;
extern HWND khm_hwnd_rebar;

void khm_register_main_wnd_class(void);
void khm_unregister_main_wnd_class(void);
void khm_create_main_window_controls(HWND);
void khm_create_main_window(void);
void khm_activate_main_window(void);
void khm_show_main_window(void);
void khm_close_main_window(void);
void khm_hide_main_window(void);
BOOL khm_is_main_window_visible(void);
BOOL khm_is_main_window_active(void);
LRESULT khm_rebar_notify(LPNMHDR lpnm);

void
khm_set_dialog_result(HWND hwnd, LRESULT lr);

LRESULT CALLBACK 
khm_main_wnd_proc(HWND hwnd,
                  UINT uMsg,
                  WPARAM wParam,
                  LPARAM lParam);

#define WM_KHUI_ASSIGN_COMMANDLINE       32808
#define WM_KHUI_QUERY_APP_VERSION        32809

#define COMMANDLINE_MAP_FMT              L"Local\\NetIDMgr_Cmdline_%lu"
#define QUERY_APP_VER_MAP_FMT            L"Local\\NetIDMgr_QueryVer_%lu"

#endif
