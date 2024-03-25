#include <stdio.h>
#include <strarg.h>
#include “main.h”

data handler[] =
{
        {"c", c_handler},
        {"s", s_handler},
        {"%", percent_handler},
        {NULL, NULL}
};

Int _printf(const char *format, …)
{
        va_list args;
        

