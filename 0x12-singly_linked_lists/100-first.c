#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
void print_message(void) __attribute__((constructor));

/**
 * print_message - Prints the message
 */
void print_message(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
