/*************************************************************************/
/* Copyright (C) 2007-2009 sujith <m.sujith@gmail.com>                   */
/* Copyright (C) 2009-2013 matias <mati86dl@gmail.com>                   */
/*                                                                       */
/* This program is free software: you can redistribute it and/or modify  */
/* it under the terms of the GNU General Public License as published by  */
/* the Free Software Foundation, either version 3 of the License, or     */
/* (at your option) any later version.                                   */
/*                                                                       */
/* This program is distributed in the hope that it will be useful,       */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of        */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         */
/* GNU General Public License for more details.                          */
/*                                                                       */
/* You should have received a copy of the GNU General Public License     */
/* along with this program.  If not, see <http://www.gnu.org/licenses/>. */
/*************************************************************************/

#ifndef PRAGHA_PREFERENCES_DIALOG_H
#define PRAGHA_PREFERENCES_DIALOG_H

/* pragha.h */
struct con_win;

#define LASTFM_UNAME_LEN           256
#define LASTFM_PASS_LEN            512
#define ALBUM_ART_PATTERN_LEN      1024
#define AUDIO_CD_DEVICE_ENTRY_LEN  32

typedef struct _PreferencesDialog PreferencesDialog;

void pragha_preferences_dialog_show (struct con_win *cwin);

#endif /* PRAGHA_PREFERENCES_DIALOG_H */