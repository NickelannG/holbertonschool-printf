#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * percent_handler - Handles the '%%' conversion specifier.
 * @args: A va_list containing the variable arguments (unused).
 *
 * Description:
 *     This function prints a '%' character to the standard output. It is
 *     called when the '%%' conversion specifier is encountered in the format
 *     string.
 *
 * Args:
 *     args: A va_list containing the variable arguments (unused).
 *
 * Return:
 *     The function always returns 1 to indicate success.
 */

int percent_handler(va_list args)
{
	(void) args;
	_putchar('%');
	return (1);
}

