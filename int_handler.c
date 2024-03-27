#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"
#include <limits.h>

/**
 * int_neg - a recursive function that prints negative integers
 * char by char
 *
 * @num: num to print
 *
 * Return:
 * count of digits printed
 */

int int_neg(int num)
{
	int count = 1;
	int r = -(num % 10);
	char c = r + '0';

	if (num < -9)
	{
		count = count + int_neg((num + r) / 10);
	}
	write(1, &c, 1);

	return (count);
}
/**
 * int_handler - Handles the '%d' conversion specifier.
 * @args: A va_list containing the variable arguments.
 *
 * Description:
 *     This function handles the '%d' conversion specifier, which prints an
 *     integer to the standard output.
 *
 * Args:
 *     args: A va_list containing the variable arguments.
 *
 * Return:
 *     The function returns the number of characters printed. Returns -1 if
 *     the integer is NULL. Returns 1 if the integer is 0.
 */

int int_handler(va_list args)
{
	int num, count = 0;
	int div;

	num = va_arg(args, int);

	if (num < 0)
	{
		_putchar('-');
		count = int_neg(num) + 1;
	}

	else if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		div = 1;
		while (num / div >= 10)
		{
			div *= 10;
		}
		while (div != 0)
		{
			_putchar((num / div) + '0');
			count++;
			num %= div;
			div /= 10;
		}
	}
	return (count);
}
