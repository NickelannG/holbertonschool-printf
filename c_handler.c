#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * printf_s - Prints a string passed as a parameter.
 * @d: A pointer to the data struct containing format information.
 *
 * Description:
 *     This function prints a string passed as a parameter to standard output.
 *     It is called when the '%' conversion specifier 's' is encountered in the
 *     format string.
 *
 * Return:
 *     None.
 */

int c_handler(va_list args)
{
        char c;

        c = (char)va_arg(args, int);
        _putchar(c);

        return (1);

}

