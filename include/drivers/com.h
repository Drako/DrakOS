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

#ifndef DRAKOS_DRIVERS_COM_H
#define DRAKOS_DRIVERS_COM_H

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef enum
{
    COM1 = 0,
    COM2 = 1,
    COM3 = 2,
    COM4 = 3
} com_port_t;

uint8_t com_num_ports(void);
uint16_t com_base_port(com_port_t com_port);
void com_init(com_port_t com_port, uint32_t baud, uint8_t parity, uint8_t bits);
bool com_can_read(com_port_t com_port);
bool com_can_write(com_port_t com_port);
void com_write(com_port_t com_port, uint8_t value);
uint8_t com_read(com_port_t com_port);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // DRAKOS_DRIVERS_COM_H
