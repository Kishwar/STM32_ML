/**
  ******************************************************************************
  * @file    main.c
  * @author  Kishwar Kumar
  * @version V1.0
  * @date    01-December-2019
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f4xx.h"
#include "freeRTOS.h"
#include "task.h"
#include "stm32_ext_common.h"
#include <string.h>
#include <stdio.h>

#define POOLING_MODE
			
TaskHandle_t _taskHanlde1 = NULL;
TaskHandle_t _taskHanlde2 = NULL;

void _vtaskHander1(void *param);
void _vtaskHander2(void *param);
void _vsetupHadware(void);

int main(void)
{
  //Reset the RCC clock configuration to the default reset state
  //MSI ON, PLL OFF, HSE OFF, System Clock 16MHz, CPU 16MHz
  RCC_DeInit();
  SystemCoreClockUpdate();

  _vsetupHadware();

  //module started message
  vextprintf("^START\r\n\n");

  //lets create 2 tasks
  xTaskCreate(_vtaskHander1,"TASK_LED", 500, NULL, 0, &_taskHanlde1);
  xTaskCreate(_vtaskHander2,"TASK_BUTTON", 500, NULL, 0, &_taskHanlde2);

  //start task scheduler
  vTaskStartScheduler();

	for(;;);
}

void _vsetupHadware(void)
{
  GPIO_InitTypeDef uartPinIO, ledInit;
#ifdef POOLING_MODE
  GPIO_InitTypeDef buttonInit;
#else // Interrupt mode
  EXTI_InitTypeDef buttonInit;
#endif
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

  //----- GPIO SETUP -----
  memset(&ledInit, 0, sizeof(GPIO_InitTypeDef));
  memset(&buttonInit, 0, sizeof(GPIO_InitTypeDef));

  ledInit.GPIO_Pin = GPIO_Pin_5;
  ledInit.GPIO_Mode = GPIO_Mode_OUT;
  ledInit.GPIO_PuPd = GPIO_PuPd_NOPULL;
  ledInit.GPIO_Speed = GPIO_Low_Speed;
  ledInit.GPIO_OType = GPIO_OType_PP;
  GPIO_Init(GPIOA, &ledInit);

#ifdef POOLING_MODE
  buttonInit.GPIO_Pin = GPIO_Pin_13;
  buttonInit.GPIO_Mode = GPIO_Mode_IN;
  buttonInit.GPIO_PuPd = GPIO_PuPd_NOPULL;
  buttonInit.GPIO_Speed = GPIO_Low_Speed;
  buttonInit.GPIO_OType = GPIO_OType_PP;
  GPIO_Init(GPIOC, &buttonInit);
#else //Interrupt mode
  SYSCFG_EXTILineConfig(EXTI_PortSourceGPIOC, EXTI_PinSource13);
  buttonInit.EXTI_Line = EXTI_Line13;
  buttonInit.EXTI_Mode = EXTI_Mode_Interrupt;
  buttonInit.EXTI_Trigger = EXTI_Trigger_Falling;
  buttonInit.EXTI_LineCmd = ENABLE;
  EXTI_Init(&buttonInit);

  NVIC_SetPriority(EXTI15_10_IRQn, 0);
  NVIC_EnableIRQ(EXTI15_10_IRQn);
#endif
}

/*
 * TASK_LED
 */
void _vtaskHander1(void *param)
{
  static BitAction _led = 0;
  while(1)
  {
    //lets wait for notification from the TASK_BUTTON
    if(xTaskNotifyWait(0,0,NULL,portMAX_DELAY))
    {
      vextprintf("Notification received. Toggle LED.\r\n\n");
      GPIO_WriteBit(GPIOA, GPIO_Pin_5, _led^=1);
    }
  }
}

/*
 * TASK_BUTTON
 */
void _vtaskHander2(void *param)
{
  while(1)
  {
    //check if button got pressed
    if(!GPIO_ReadInputDataBit(GPIOC, GPIO_Pin_13))
    {
      vextprintf("Notify.\r\n");
      xTaskNotify(_taskHanlde1, 0, eNoAction);
      vTaskDelay(500);
    }
  }
}
