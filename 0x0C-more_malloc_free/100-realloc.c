#include "main.h"
#include <string.h>

/**
 * _realloc - function that uses malloc for realloction
 * *@ptr: A pointer to some memory
 * *@old_size: the size of old memory
 * *@new_size: the size of new memory
 * Return: A new pointer if successful or NUll or old pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		return (newptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	newptr = malloc(new_size);
	if (newptr != NULL)
	{
	if (new_size > old_size)
	{
		memcpy(newptr, ptr, old_size);
	}
	else
		memcpy(newptr, ptr, new_size);
	}
	free(ptr);
	return (newptr);
}
