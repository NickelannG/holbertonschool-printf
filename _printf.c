#include <stdio.h>
#include <strarg.h>
#include "main.h"

data handler[] =
{
        {"c", c_handler},
        {"s", s_handler},
        {"%", percent_handler},
        {NULL, NULL}
};

int _printf(cont char *format, ...)
{
	int i = 0;
	int count = 0;

	va_list args;

	if (format == NULL)
		return (-1);
	
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
			count++;
		}
		else
		{
			format++;
			if (*format == '\0')
			{
				return (-1);
			}

			while (handler[i] != NULl)
			{
				if (*format == *(handler[i].valid))
				{
					count += handler[i].handler(args);
					break;
				}
				i++;
			}
			if (handler[i].valid == NULL)
			{
				_putchar('%');
				count++;
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}

