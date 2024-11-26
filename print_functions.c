#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
* print_char - print the %c specifier in _printf
* @args: A va_list containing the argument to print
*
* Return: The number of characters printed (always 1 for a single char)
*/
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);

	return (1);
}
/**
* print_string - print the %s specifier in _printf
* @args: A va_list containing the argument to print
*
* Return: The number of characters printed
*/
int print_string(va_list args)
{
	unsigned int i;
	char *s;

	s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (i);
}
