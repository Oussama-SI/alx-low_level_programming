#include <stdio.h>
#include "main.h"
/**
 * print_binary - transform decimal to binary
 * @n: the decimal number
 */

void print_binary(unsigned long int n)
{
	unsigned long int pwr = 1, a;

	if (n == 0)
		putchar('0');

	while (pwr <= n)
		pwr *= 2;

	pwr >>= 1;

	while (pwr >= 1)
	{
		a = n & pwr;
		if (a == pwr)
		{
			putchar('1');
			pwr >>= 1;
		}
		else
		{
			putchar('0');
			pwr >>= 1;
		}
	}
}
