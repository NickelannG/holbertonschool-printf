#ifndef MAIN_H
#define MAIN_H

/**
 * struct data - struct to hold information about conversion specifiers
 * @valid: pointer to a string of valid conversion specifiers
 * @func: function pointer to the handling function for the conversion
 * specifier
 *
 */

typedef struct data
{
	char *valid;
	int (*func)(va_list);
} data;

int _printf(const char *format, ...);
int _putchar(char c);
int c_handler(va_list args);
int s_handler(va_list args);
int percent_handler(va_list args);
int int_handler(va_list args);
int process_format(const char *format, va_list args, data *handler);
#endif

