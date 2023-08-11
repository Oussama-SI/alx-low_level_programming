#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *Mm;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	Mm = malloc(sizeof(int) * size);

	if (Mm == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		Mm[i] = min++;

	return (Mm);
}
