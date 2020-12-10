/**
  ******************************************************************************
  * @file    stm32_ext_common.c
  * @author  Kishwar Kumar
  * @version V1.0
  * @date    01-December-2019
  * @brief   Common functions.
  ******************************************************************************
*/

#include "stm32_ext_common.h"
#include <string.h>

void vextprintf(char *arg)
{
  for(uint32_t i=0; i<strlen(arg); i++)
  {
    while(USART_GetFlagStatus(USART2, USART_FLAG_TXE) != SET);
    USART_SendData(USART2, arg[i]);
  }
}
