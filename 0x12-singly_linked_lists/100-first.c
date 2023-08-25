#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
void print_first(void) __attribute__((constructor));
/**
 * print_first - Prints the message
 */
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
