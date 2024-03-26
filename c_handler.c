#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * c_handler - Handles the '%c' conversion specifier.
 * @args: A va_list containing the variable arguments.
 *
 * Description:
 *     This function prints a character passed as a parameter to standard
 *     output. It is called when the '%' conversion specifier 'c' is
 *     encountered in the format string.
 *
 * Args:
 *     args: A va_list containing the variable arguments.
 *
 * Return:
 *     The function returns the number of characters printed, which is always 1
 *     since it handles only a single character at a time.
 */

int c_handler(va_list args)
{
	char c;

	c = (char)va_arg(args, int);
	_putchar(c);

	return (1);

}
