#ifndef UART_H
#define UART_H

/* Macros and definitions */
typedef  char uint8;

/* Public Functions */
extern void Uart_WriteString(const uint8* data);
extern void Uart_WriteNumber(const int number);


#endif /* UART_H */