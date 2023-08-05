#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to return arguments
 * @argc: the number of command line
 * @argv: a array contain string of comand lines
 *
 * Retuen: the comand line printed
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%S\n", argv[0]);
	return (0);

}
