#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * percent_handler - Handles the '%%' conversion specifier.
 * @args: A va_list containing the variable arguments.
 *
 * This function is responsible for handling the '%%' conversion specifier,
 * which prints a '%' character to the standard output.
 *
 * Args:
 *     args: A va_list containing the variable arguments.
 *
 * Return:
 *     The function returns an integer indicating the success of the operation.
 *     Always returns 0.
 */

int percent_handler(va_list args)
{
        (void) args;
        _putchar('%');
        return (1);
}

