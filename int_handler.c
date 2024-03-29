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
        unsigned int n, div;
        int count = 0, num;

        num = va_arg(args, int);
        if (num < 0)
        {
                n = (num * -1);
                count+= _putchar('-');
                _putchar(n);
        }
        else
                n = num;

        div = 1;
        while (n / div > 9)
        {
                div *= 10;
        }
        while (div >= 1)
        {
                    _putchar((n / div) + '0');
                    count++;
                    n %= div;
                    div /= 10;
        }
        return (count);
}
   
