#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <limits.h>
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
        int div, k;

        num = va_arg(args, int);
	
	if (num == INT_MIN)
	{
		count ++;
		num /= 10;
	}	
	if (num < 0)
        {
		k = (num * -1);
		count += _putchar('-');

        }
        else 
                k = num;

        if (num == 0)
        {
                _putchar('0');
                count++;
        }
        else
        {
                div = 1;
                while (k / div >= 10)
                {
                        div *= 10;
                }
                while (div != 0)
                {
                        _putchar((k / div) + '0');
                        count++;
                        k %= div;
                        div /= 10;
                }
        }
        return (count);
}
