#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a array of integrs
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **dim_arr;
	int i, j, k = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	dim_arr = malloc(sizeof(int *) * height);
	if (dim_arr == NULL)
	{
		return (NULL);
		free(dim_arr);
	}

	for (i = 0 ; i < height ; i++)
	{
		dim_arr[i] = malloc(sizeof(int *) * width);
		if (dim_arr[i] == NULL)
		{
			return (NULL);
			free(dim_arr[i]);
		}
		for (j = 0 ; j < width ; j++)
		{
			dim_arr[i][j] = k;
		}
	}

	return (dim_arr);
	free(dim_arr);
}
