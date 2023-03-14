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
	int **maze, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	maze = malloc(height * sizeof(int));
	if (maze == NULL)
	{
		return (NULL);
	}
	maze[0] = malloc(width * height * sizeof(int));
	if (maze[0] == NULL)
	{
		free(maze);
		return (NULL);
	}
	for (i = 1; i < height; i++)
	{
		maze[i] = maze[i - 1] + width;
	}
	return (maze);
}
