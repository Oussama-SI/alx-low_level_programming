#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: number of comand line
 * @argv: array of comand line
 *
 * Return: the result of function
 */
int main(int argc, char *argv[])
{
	int mul_2;
	int s1, s2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		s1 = atoi(argv[1]);
		s2 = atoi(argv[2]);
		mul_2 = s1 * s2;

		printf("%d\n", mul_2);
	}
	return (0);
}
