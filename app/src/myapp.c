#include "uart.h"
#include "string.h"

int main(void)
{
    Uart_WriteString("Hi ");
    Uart_WriteString(myname);
    Uart_WriteString(" !\n");
    Uart_WriteNumber(16299);
    return 0;
}
