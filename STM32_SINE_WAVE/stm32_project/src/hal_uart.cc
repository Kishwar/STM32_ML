/*
 * hal_uart.c
 *
 * Author: kishwar kumar
 */

#include "hal_uart.h"

void print(char *a) {
  for(uint32_t i=0; i<strlen(a); i++)
  {
    while(USART_GetFlagStatus(USART2, USART_FLAG_TXE) != SET);
    USART_SendData(USART2, a[i]);
  }
}

void hal_uart_config(void)
{
  GPIO_InitTypeDef uartPinIO;
  USART_InitTypeDef uartInit;

  //----- USART SETUP -----
  //1. Enable the URL Peripheral Clock
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2, ENABLE);
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);

  //2. Alternate function configuration of MCU pins to USART Tx and Rx
  memset(&uartPinIO, 0, sizeof(GPIO_InitTypeDef));
  uartPinIO.GPIO_Pin = GPIO_Pin_2 | GPIO_Pin_3;
  uartPinIO.GPIO_Mode = GPIO_Mode_AF;
  uartPinIO.GPIO_PuPd = GPIO_PuPd_NOPULL;
  uartPinIO.GPIO_Speed = GPIO_Low_Speed;
  uartPinIO.GPIO_OType = GPIO_OType_PP;
  GPIO_Init(GPIOA, &uartPinIO);

  //3. AF mode settings for the pins
  GPIO_PinAFConfig(GPIOA, GPIO_PinSource2, GPIO_AF_USART2);   //PA2
  GPIO_PinAFConfig(GPIOA, GPIO_PinSource3, GPIO_AF_USART2);   //PA3

  //4. UART parameters initialisation
  memset(&uartInit, 0, sizeof(USART_InitTypeDef));
  uartInit.USART_BaudRate = 115200;
  uartInit.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
  uartInit.USART_Mode = USART_Mode_Tx | USART_Mode_Rx;
  uartInit.USART_Parity = USART_Parity_No;
  uartInit.USART_StopBits = USART_StopBits_1;
  uartInit.USART_WordLength = USART_WordLength_8b;
  USART_Init(USART2, &uartInit);

  //5. Enable the USART peripheral
  USART_Cmd(USART2, ENABLE);
}
