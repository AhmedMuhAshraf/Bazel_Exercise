#ifndef CONSOLE_H
#define CONSOLE_H

/* Macros and definitions */
typedef  char uint8;

/* Public Functions */
extern void write_to_console(const uint8* data);
extern void convert_to_str(const uint8* data, int num);


#endif /* CONSOLE_H */