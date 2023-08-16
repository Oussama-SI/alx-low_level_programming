#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - pointer to each array
 * @array: numbers in array
 * @size: number of array
 * @action: pointer to array
 * Return: NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
