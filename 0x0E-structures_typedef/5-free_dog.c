#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free the allocated memory to prevent leaks
 * *@d: A pointer to struct
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
