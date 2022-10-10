#include "uart.h"
#include "console.h"

void Uart_WriteString(const uint8* data)
{
    signed int cnt ;
  
    write_to_console(data);
    
    return ;
}

void Uart_WriteNumber(const int number)
{

    uint8 numStr[100];

    convert_to_str(&numStr, number);

    Uart_WriteString(numStr);

    return ;
}
