/*
    Copyright (C) 2015, Felix Bytow <felix.bytow@googlemail.com>

    This file is part of DrakOS.

    DrakOS is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    DrakOS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with DrakOS.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef DRAKOS_STRING_H
#define DRAKOS_STRING_H

#include "stddef.h"

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/***********
 * Copying *
 ***********/

void * memcpy(void * dest, void const * src, size_t cnt);
void * memmove(void * dest, void const * src, size_t cnt);
char * strcpy(char * dest, char const * src);
char * strncpy(char * dest, char const * src, size_t cnt);

/*****************
 * Concatenation *
 *****************/

char * strcat(char * dest, char const * src);
char * strncat(char * dest, char const * src, size_t cnt);

/**************
 * Comparison *
 **************/

int memcmp(void const * lhs, void const * rhs, size_t cnt);
int strcmp(char const * lhs, char const * rhs);
int strncmp(char const * lhs, char const * rhs, size_t cnt);

/*********
 * Other *
 *********/

void * memset(void * ptr, unsigned char val, size_t cnt);
size_t strlen(char const * str);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // DRAKOS_STRING_H
