#include <stdio.h>
#include "main.h"

void _puts_recursion(char *s)
{
	if (*s == '0')
	{
		putchar('\n');
	}
	else
	{
		if (*s == '.')
			putchar('.');
		else
			if (*s == ',')
				putchar(',');
	}
putchar(*s);
_puts_recursion(s + 1);
}
