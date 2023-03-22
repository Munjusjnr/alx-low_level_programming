#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array.
 * *@array: A pointer to int array
 * *@size: size of the array
 * *@action: A function pointer with a parameter integer passed
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
	}

}
