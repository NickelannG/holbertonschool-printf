#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * inti_handler - Handles the '%i' conversion specifier.
 * @args: A va_list containing the variable arguments.
 *
 * Description:
 *     This function handles the '%i' conversion specifier, which prints an
 *     integer that supports decimal, octal, and hexadeciaml types
 *     to the standard output.
 *
 * Args:
 *     args: A va_list containing the variable arguments.
 *
 * Return:
 *     The function returns the number of characters printed. Returns -1 if
 *     the integer is NULL. Returns 1 if the integer is 0.
 */

int inti_handler(va_list args)
{
	int num = va_arg(args, int);
	int count =0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	if ((num & 0xFFFFFFF0) == 0x10)
	{
		_putchar('0');
		_putchar('x');
		count += 2;
	}
	if ((num & 0xFFFFFFF8) == 0x08)
	{
		_putchar ('0');
		count++;
	}
	count += int_handler(args);
	return (count);
}
