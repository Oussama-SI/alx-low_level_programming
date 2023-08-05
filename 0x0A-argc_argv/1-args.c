#include "main.h"
#include <stdio.h>
/**
 * main - the main function
 * @argc: number of comand line
 * @argv: array of comand line
 *
 * Return: the result of function
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
