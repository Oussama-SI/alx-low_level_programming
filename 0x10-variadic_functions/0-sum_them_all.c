#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - calcule the summe of nember
 *@n: number of numbers
 *
 * Return: NULL
 */
int sum_them_all(const unsigned int n, ...)
{
	int summ = 0;
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0 ; i < n ; i++)
	{
		summ += va_arg(args, int);
	}
	return (summ);
}
