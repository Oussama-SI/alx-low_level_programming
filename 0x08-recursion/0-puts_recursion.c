#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - make a recursive character
 * @s: the character to recursive
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		putchar('\n');
}
