#include "function_pointers.h"

/**
 * int_index - function that returns the index of a searched integer
 * *@array: A pointer to int array
 * *@size: size of an array
 * *@cmp: A function pointer that returns an int
 * Return: index if successful -1 if otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	}
	return (-1);
}
