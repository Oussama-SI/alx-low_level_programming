#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free the space squered by malloc
 * @grid: the array to free up
 * @height: the height of the array
 *
 * Return: NULL
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);

	free(grid);

}
