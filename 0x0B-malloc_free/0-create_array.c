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
	char *buffer;
	unsigned int i = 0;

	if (size == 0)

		return (NULL);

	while (i < size)
	{
		buffer =(char *)malloc(size * sizeof(char));
		buffer[i]= c;
		i++;
	}
return (NULL);
}
