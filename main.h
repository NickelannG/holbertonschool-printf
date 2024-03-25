#ifndef MAIN_H
#define MAIN_H

/**
 * struct specifier - struct to hold information about conversion specifiers
 * @valid: pointer to a string of valid conversion specifiers
 * @handler: function pointer to the handling function for the conversion specifier
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
#endif

