#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
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
        int div, r;
        char c;

        num = va_arg(args, int);
	
	while (num <= -1)
	{
		r = -(num % 10);
        	c = r + '0';
        	_putchar(c);
        	num = (num + r) / 10;
        	count++;
	}

	if (num == 0)
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
