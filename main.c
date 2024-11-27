#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	_printf("test%stest", "adonis");
	_printf("test%stest", NULL);
	_printf("test%ctest", 'A');
	_printf("test%dtest", 1234);
	_printf("test%dtest", -1234);
	_printf("test%itest", 1234);
	_printf("test%itest", -1234);
	_printf("test%%test");
	_printf("test%mtest");
	_printf("");
	return (0);
}
