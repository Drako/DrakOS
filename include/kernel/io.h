/*
 *  Copyright (C) 2015, Felix Bytow <felix.bytow@googlemail.com>
 *
 *  This file is part of DrakOS.
 *
 *  DrakOS is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  DrakOS is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with DrakOS.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DRAKOS_KERNEL_IO_H
#define DRAKOS_KERNEL_IO_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/*********
 * Input *
 *********/

static inline unsigned char inb(unsigned short int port)
{
    unsigned char value;
    __asm__ __volatile__ ("inb %w1,%0":"=a"(value):"Nd"(port));
    return value;
}

static inline unsigned char inb_p(unsigned short int port)
{
    unsigned char value;
    __asm__ __volatile__ ("inb %w1,%0\noutb %%al,$0x80":"=a"(value):"Nd"(port));
    return value;
}

static inline unsigned short int inw(unsigned short int port)
{
    unsigned short int value;
    __asm__ __volatile__ ("inw %w1,%0":"=a"(value):"Nd"(port));
    return value;
}

static inline unsigned short int inw_p(unsigned short int port)
{
    unsigned short int value;
    __asm__ __volatile__ ("inw %w1,%0\noutb %%al,$0x80":"=a"(value):"Nd"(port));
    return value;
}

static inline unsigned int inl(unsigned short int port)
{
    unsigned int value;
    __asm__ __volatile__ ("inl %w1,%0":"=a"(value):"Nd"(port));
    return value;
}

static inline unsigned int inl_p(unsigned short int port)
{
    unsigned int value;
    __asm__ __volatile__ ("inl %w1,%0\noutb %%al,$0x80":"=a"(value):"Nd"(port));
    return value;
}

/**********
 * Output *
 **********/

static inline void outb(unsigned char value, unsigned short int port)
{
    __asm__ __volatile__ ("outb %b0,%w1": :"a"(value), "Nd"(port));
}

static inline void outb_p(unsigned char value, unsigned short int port)
{
    __asm__ __volatile__ ("outb %b0,%w1\noutb %%al,$0x80": :"a"(value), "Nd"(port));
}

static inline void outw(unsigned short int value, unsigned short int port)
{
    __asm__ __volatile__ ("outw %w0,%w1": :"a"(value), "Nd"(port));
}

static inline void outw_p(unsigned short int value, unsigned short int port)
{
    __asm__ __volatile__ ("outw %w0,%w1\noutb %%al,$0x80": :"a"(value), "Nd"(port));
}

static inline void outl(unsigned int value, unsigned short int port)
{
    __asm__ __volatile__ ("outl %0,%w1": :"a"(value), "Nd"(port));
}

static inline void outl_p(unsigned int value, unsigned short int port)
{
    __asm__ __volatile__ ("outl %0,%w1\noutb %%al,$0x80": :"a"(value), "Nd"(port));
}

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // DRAKOS_KERNEL_IO_H
