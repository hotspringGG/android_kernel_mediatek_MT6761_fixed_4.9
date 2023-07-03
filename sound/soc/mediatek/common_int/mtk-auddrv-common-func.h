/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

/******************************************************************************
 *
 *
 * Filename:
 * ---------
 *   AudDrv_Common_func.h
 *
 * Project:
 * --------
 *   MT6797 FPGA LDVT Audio Driver
 *
 * Description:
 * ------------
 *   Audio register
 *
 * Author:
 * -------
 *   George
 *
 *---------------------------------------------------------------------------
 *
 *
 ****************************************************************************
 */

#ifndef AUDIO_COMMON_FUNC_H
#define AUDIO_COMMON_FUNC_H

#include <linux/device.h>
#include <linux/pm_wakeup.h>

bool get_voice_bt_status(void);
bool get_voice_status(void);
bool get_voice_md2_bt_status(void);
bool get_voice_md2_status(void);
bool get_voice_ultra_status(void);
bool get_voice_usb_status(void);
void Auddrv_Read_Efuse_HPOffset(void);
bool get_internalmd_status(void);

/* wake lock relate*/
#define aud_wake_lock_init(ws, name) wakeup_source_init(ws, name)
#define aud_wake_lock_destroy(ws) wakeup_source_trash(ws)
#define aud_wake_lock(ws) __pm_stay_awake(ws)
#define aud_wake_unlock(ws) __pm_relax(ws)

/* for AUDIO_DL2_ISR_COPY_SUPPORT */
void mtk_dl2_copy_l(void);
void mtk_dl2_copy2buffer(const void *addr, uint32_t size);

#endif
