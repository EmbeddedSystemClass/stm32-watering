/**
  ******************************************************************************
  * @file    command.h
  * @author  Dinow
  * @version V0.0.1
  * @date    2015-11-26
  * @brief   command console
  ******************************************************************************
  * @attention
  *
  *
  *
  ******************************************************************************
  */

#ifndef __INC_COMMAND_H_
#define __INC_COMMAND_H_

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"

/* Exported types ------------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */
void COMM_Init(void);
extern QueueHandle_t xCommandQueue;

#endif /* __INC_COMMAND_H_ */
