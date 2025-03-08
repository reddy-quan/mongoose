/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _FSL_DEBUG_CONSOLE_CONF_H_
#define _FSL_DEBUG_CONSOLE_CONF_H_

#define DEBUG_CONSOLE_TRANSMIT_BUFFER_LEN 512U
#define DEBUG_CONSOLE_RECEIVE_BUFFER_LEN 1024U
#define DEBUG_CONSOLE_TX_RELIABLE_ENABLE 1
#define DEBUG_CONSOLE_RX_ENABLE 1
#define DEBUG_CONSOLE_PRINTF_MAX_LOG_LEN 128U
#define DEBUG_CONSOLE_SCANF_MAX_LOG_LEN 20U
#define DEBUG_CONSOLE_SYNCHRONIZATION_BM 0
#define DEBUG_CONSOLE_SYNCHRONIZATION_FREERTOS 1
// #define DEBUG_CONSOLE_DISABLE_RTOS_SYNCHRONIZATION 0
// #define DEBUG_CONSOLE_ENABLE_ECHO_FUNCTION 0
// #define BOARD_USE_VIRTUALCOM 0

#endif /* _FSL_DEBUG_CONSOLE_CONF_H_ */
