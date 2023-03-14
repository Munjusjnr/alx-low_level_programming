#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees 2D arrays
 * *@grid: A pointer to pointer integer
 * *@height: handles the column of the 2D array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int v;

	for (v = 0; v < height; v++)
	{
		free(grid[v]);
	}
	free(grid);
}
