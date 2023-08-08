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

	dim_arr = malloc(sizeof(int *) * (height + 1));

	i = 0;
	while (i < height)
	{
		dim_arr = malloc(sizeof(int *) * (width + 1));
		j = 0;
		while (j < width)
		{
			dim_arr[i][j] = k;
			j++;
		}
		i++;
	}

	if (width <= 0 || height <= 0)
		return (NULL);

	return (dim_arr);
}
