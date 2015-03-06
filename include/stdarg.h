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

#ifndef DRAKOS_STDARG_H
#define DRAKOS_STDARG_H

typedef va_list __gnuc_va_list;

#define va_start(v,l) __builtin_va_start(v,l)
#define va_end(v)     __builtin_va_end(v)
#define va_arg(v, l)  __builtin_va_arg(v,l)
#define va_copy(d,s)  __builtin_va_copy(d,s)

#endif // DRAKOS_STDARG_H

