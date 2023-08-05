#include "main.h"
#include <stdio.h>
/**
 * main - the main function
 * @argc: number of comand line
 * @argv: array of comand line
 *
 * Return: the result of function
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	}
	return (0);
}
