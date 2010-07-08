#ifndef __UTIL_H
#define __UTIL_H

///////////////////////////////////////////////////////////////////////////////
//
// AutoIt
//
// Copyright (C)1999-2003:
//		- Jonathan Bennett <jon@hiddensoft.com>
//		- See "AUTHORS.txt" for contributors.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
///////////////////////////////////////////////////////////////////////////////
//
// util.h
//
// Util functions.
//
///////////////////////////////////////////////////////////////////////////////


void	Util_ShowError(char *szText);
void	Util_ShowErrorIDS(unsigned int iErr);
void	Util_ShowInfoIDS(unsigned int iErr);
void	Util_GetFullPath(char *szInput);
int		Util_Run(const char *szCmd, const char *szDir, int nShow, bool bWait);
bool	Util_GetFileVersion(char *szFile, char *szVersion);

///////////////////////////////////////////////////////////////////////////////

#ifdef UNICODE
#define tcslcpy wcslcpy
#else
#define tcslcpy strlcpy
#endif

#ifdef UNICODE
#define tmemcpy			wmemcpy
#define tmemmove		wmemmove
#define tmemset			wmemset
#define tmemcmp			wmemcmp
#define tmalloc(c)		((LPTSTR) malloc((c) << 1))
#define trealloc(p, c)	((LPTSTR) realloc((p), (c) << 1))
#define talloca(c)		((LPTSTR) _alloca((c) << 1))
#else
#define tmemcpy			(char*)memcpy
#define tmemmove		memmove
#define tmemset			memset
#define tmemcmp			memcmp
#define tmalloc(c)		((LPTSTR) malloc(c))
#define trealloc(p, c)	((LPTSTR) realloc((p), (c)))
#define talloca(c)		((LPTSTR) _alloca(c))
#endif



#endif // __UTIL_H





