#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - a function mke array
 * @size: the lenght of array
 * @c: char stack in the array
 *
 * Return: Null
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = malloc((size + 1) * sizeof(char));

	if (size == 0)

		return (NULL);

	while (i < size)
	{
		arr[i] =  c;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
