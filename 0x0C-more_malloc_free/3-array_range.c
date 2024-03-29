#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * *@min: Minimum value
 * *@max: Maximum value
 * Return: A pointer to the new array containing the integers
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
