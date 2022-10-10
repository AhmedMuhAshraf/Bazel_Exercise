#include  <stdio.h>
#include  "console.h"

/* Funciton to print to console */
void write_to_console(const uint8* data)
{
    printf("%s",data);
    return ;
}

/* Funciton to convert number to string */
void convert_to_str(const uint8* data, int num)
{
    (void)snprintf(data, sizeof(data), "%d", num);
    return ;
}