#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - A function that returns a pointer to a 2D array
 * *@width: Holds the outer array
 * *@height: Holds the inner array
 * Return: A pointer maze when successful , null if otherwise
 */

int **alloc_grid(int width, int height)
{
	int **maze, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	maze = malloc(height * sizeof(int *));
	if (maze == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	maze[i] = malloc(width * sizeof(int));
	if (maze[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
			free(maze[j]);
		}
		free(maze);
		return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		maze[i][j] = 0;
	}
	}
	return (maze);
}
