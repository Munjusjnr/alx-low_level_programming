#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - function using malloc to set memory at zero for array
 * *@nmemb: array of int
 * *@size: size of array of int
 * Return: A pointer to arr memory allocated or NUll
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = calloc(nmemb, size);
	if (arr == NULL)
	{
		return (NULL);
	}
	return (arr);
}
