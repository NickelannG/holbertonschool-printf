#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * s_handler - Handles the '%s' conversion specifier.
 * @args: A va_list containing the variable arguments.
 *
 * Description:
 *     This function is responsible for handling the '%s' conversion
 *     specifier, which prints a string to the standard output.
 *
 * Args:
 *     args: A va_list containing the variable arguments.
 *
 * Return:
 *     The function returns an integer indicating the success of the
 *     operation. Returns -1 if the string pointer is NULL. Returns 0 on
 *     success.
 */

int s_handler(va_list args)
{
	int count = 0;
	char *str;

	str = va_arg(args, char*);

	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (-6);
	}

	while (*str != '\0')
	{
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}
