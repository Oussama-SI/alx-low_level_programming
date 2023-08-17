#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function to print numbers
 * @separator: the parate between every number
 * @n: number of arguments
 * Return: print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int c;

	va_list args;

	va_start(args, n);

	for (i = 0 ; i < n - 1 ; i++)
	{
		if (separator != NULL)
		{
			c = va_arg(args, int);
			printf("%d%s", c, separator);
		}
	}
	for (i = n - 1 ; i < n ; i++)
	{
		if (separator != NULL)
		{
			c = va_arg(args, int);
			printf("%d", c);
		}
	}
	printf("\n");

	va_end(args);
}
