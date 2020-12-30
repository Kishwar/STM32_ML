/**
  ******************************************************************************
  * @file    terminal.cc
  * @author  Kishwar Kumar
  * @version V1.0
  * @date    28-December-2020
  * @memory  512Kbytes Flash, 128KByte SRAM
  ******************************************************************************
*/

#include "terminal.h"

void print(const std::string& str) {
  for(std::string::size_type i=0; i<str.size(); i++)
  {
    while(USART_GetFlagStatus(USART2, USART_FLAG_TXE) != SET);
    USART_SendData(USART2, str[i]);
  }
}

void print(int i) {
  std::string s = std::to_string(i);
  print(s);
}

void print(double d) {
  std::string s = std::to_string(d);
  print(s);
}

void print(uint32_t t) {
  std::string s = std::to_string(t);
  print(s);
}

void print(size_t z) {
  std::string s = std::to_string(z);
  print(s);
}
