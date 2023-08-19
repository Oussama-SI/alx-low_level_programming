#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - to check the code
 * @argc: argument of nmbr elem used
 * @argv[]: array containers
 *
 * Return: result of operation
 */
int main(int argc, char *argv[])
{
	int b, d;
	char *a;

	 a = argv[2];
	 b = atoi(argv[3]);
	 d = atoi(argv[1]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		if (get_op_func(a) == NULL || a[1] != '\0')
		{
			printf("Error\n");
			exit(99);
		}
		else
		{
			if ((*a == '/' || *a == '%') && b == 0)
			{
				printf("Error\n");
				exit(100);
			}
			else
			{
				printf("%d", get_op_func(argv[2])(d, b));
				printf("\n");
			}
		}
	}
	return (0);
}
