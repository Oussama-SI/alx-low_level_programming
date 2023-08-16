#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function to print
 * @name: name to print
 * @f: pointer to name
 * Return: NULL
 */
void print_name(char *name, void (*f)(char *))
{
	int i = 0;

	while (i)
	{
		putchar(name[i]);
		i++;
	}
	if (name == NULL || f == NULL)
		return;

	f(name);

}
