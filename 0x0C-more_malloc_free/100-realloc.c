#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _realloc - function that uses malloc for realloction
 * *@ptr: A pointer to some memory
 * *@old_size: the size of old memory
 * *@new_size: the size of new memory
 * Return: A new pointer if successful or NUll or old pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newpointr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newpointr = malloc(new_size);
		return (newpointr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	newpointr = malloc(new_size);
	if (newpointr != NULL)
	{
	if (new_size > old_size)
	{
		memcpy(newpointr, ptr, old_size);
	}
	else
		memcpy(newpointr, ptr, new_size);
	}
	free(ptr);
	return (newpointr);
}
