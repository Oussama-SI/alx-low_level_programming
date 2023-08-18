#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function to print numbers
 * @separator: the parate between every number
 * @n: number of arguments
 * Return: print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		s = va_arg(args, char*);
		if (s == NULL)
			printf("(nil)");
		else
		{
			if (separator != NULL)
			{
				if(i != n - 1)
					printf("%s%s", s, separator);
				else
					printf("%s", s);
			}
		}
	}
	printf("\n");

	va_end(args);
}
