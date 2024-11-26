#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct specifier_t
{
	char *specifier;
	int (*print)(va_list args);
} specifier_t;

int _printf(const char *format, ...);
int _putchar(char c);

int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);

#endif