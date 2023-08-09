#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - the main function
 * @argc: number of comand line
 * @argv: array of comand line
 *
 * Return: the result of function
 */
int main(int argc, char *argv[])
{
	int i, j;
	int som = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] != '\0' ; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			else
				som = som + atoi(argv[i]);
		}
	}
	}
	printf("%d\n", som);
	return (0);
}
