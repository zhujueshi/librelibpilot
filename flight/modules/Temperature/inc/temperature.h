/**
 ******************************************************************************
 * @addtogroup OpenPilotModules OpenPilot Modules
 * @{
 * @addtogroup TemperatureModule Temperature Module
 * @{
 *
 * @file       temperature.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2019.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Module to read the temperature periodically from NTC or LM35 sensors.
 *
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */
#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include "openpilot.h"

int32_t TemperatureInitialize(void);

#endif // TEMPERATURE_H

/**
 * @}
 * @}
 */
