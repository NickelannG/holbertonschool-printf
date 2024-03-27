#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * process_format - a function that processes the format and
 * calls the appropriate handlers
 * @format: the format
 * @args: handlers
 * @handler: a pointer to the data array
 * Return: number of characters
 */

int process_format(const char *format, va_list args, data *handler)
{
	int count = 0;
	int i;

	while (*format != '\0')
	{
		i = 0;
		if (*format != '%')
		{
			_putchar(*format);
			count++;
		}
		else
		{
			format++;
			if (*format == '\0')
				return (-1);
			while (handler[i].valid != NULL)
			{
				if (*format == *(handler[i].valid))
				{
					count += handler[i].func(args);
					break;
				}
				i++;
			}
			if (handler[i].valid == NULL)
			{
				_putchar('%');
				_putchar(*format);
				count += 2;
			}
		}
		format++;
	}
	return (count);
}
/**
 * _printf - Produces output according to a format.
 * @format: A pointer to the format string.
 * @...: Variable number of arguments.
 * Return:
 * The function returns the number of characters printed (excluding the
 * null byte used to end output to strings). Returns -1 if the format
 * string is NULL.
 */

int _printf(const char *format, ...)
{
	int count = 0;
	data handler[] = {
		{"c", c_handler},
		{"s", s_handler},
		{"%", percent_handler},
	        {"i", int_handler},
	        {"d", int_handler},
		{NULL, NULL}
	};
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	count = process_format(format, args, handler);
	va_end(args);
	return (count);
}
