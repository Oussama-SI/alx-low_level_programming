#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints c f i d
 * @format: nbr of string to print
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *add = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", add, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", add, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", add, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", add, str);
					break;
				default:
					i++;
					continue;
			}
			add = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(args);
}

