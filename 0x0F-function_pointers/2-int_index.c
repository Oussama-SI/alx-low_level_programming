#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - the index of the first true elem in array
 * @array: array of int
 * @size: the number of elem
 * @cmp: pointer to array
 * Return: NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, elem;

	if (size <= 0 || array == NULL)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		elem = array[i];
		if (cmp(elem))
			break;
	}

	return (i);
}
