#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a character string containing format specifiers
 * @...: additional arguments corresponding to the format specifiers
 *
 * Description:
 * This function takes a format string and
 * a variable number of arguments and produces output
 * according to the format. The format string may contain
 * conversion specifiers such as %c, %s, and %%.
 *
 * Return:
 * The number of characters printed
 * (excluding the null byte used to end output to strings) is returned.
 */

int _printf(const char *format, ...)
{
	if (format == NULL)
	return (-1);

	const char *ptr = format;
	int count = 0;
	char c;
	char *str;

	va_list args;

	va_start(args, format);

	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == '\0')
			{
				break;
			}
			switch (*ptr)
			{
				case 'c':
				{
					c = (char)va_arg(args, int);
					_putchar(c);
					count++;
					break;
				}
				case 's':
				{
					str = va_arg(args, char*);

					if (str == NULL)
						return (-1);

					while (*str != '\0')
					{
						_putchar(*str);
						count++;
						str++;
					}
					break;
				}

				case '%':
				{
					_putchar('%');
					count++;
				}
				case 'i':
				case 'd':
				{
					num = va_arg(args, int);
					if (num < 0)
					{
						_putchar('-');
						count++;
					}
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
					break;
				}

				default:
				{
					_putchar(*ptr);
					count++;
					break;
				}
			}
		}
		else
		{
			_putchar(*ptr);
			count++;
		}
		ptr++;
	}
	va_end(args);
	return (count);
}
