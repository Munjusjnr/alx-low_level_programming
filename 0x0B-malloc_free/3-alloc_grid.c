#include "main.h"
#include <stdlib.h>

/**
 * alloc_grind - A function that returns a pointer to a 2D array
 * *@width: Holds the outer array
 * *@height: Holds the inner array
 * Return: A pointer maze when successful , null if otherwise
 */

int **alloc_grind(int width, int height)
{
	int **maze, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	maze = malloc(height * sizeof(int));
	maze[0] = malloc(width * height * sizeof(int));
	for (i = 0; i < height; i++)
	{
		maze[i] = maze[0] + i * width;
	}
	if (maze == NULL)
	{
		return (NULL);
	}
	return (maze);
}
