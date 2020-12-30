/**
  ******************************************************************************
  * @file    terminal.h
  * @author  Ac6
  * @version V1.0
  * @date    28-December-2020
  * @memory  512Kbytes Flash, 128KByte SRAM
  ******************************************************************************
*/

#include "stm32f4xx.h"
#include "stm32f4xx_rcc.h"
#include <bits/stdc++.h>
#include <string>

void print(const std::string& str);
void print(int i);
void print(double d);
void print(uint32_t t);
