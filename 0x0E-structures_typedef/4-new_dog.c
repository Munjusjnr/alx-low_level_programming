#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - funtion that creates new struct
 * *@name: A pointer to character name
 * *@age: age of dog
 * *@owner: A character to owner
 * Return: new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *res;

	res = malloc(sizeof(dog_t));
	if (res == NULL)
	{
		return (NULL);
	}
	res->name = malloc(strlen(name + 1));
	if (res->name == NULL)
	{
		return (NULL);
	}
	res->owner = malloc(strlen(name + 1));
	if (res->owner == NULL)
	{
		return (NULL);
	}
	strcpy(res->name, name);
	strcpy(res->owner, owner);
	res->age = age;
	return (res);
}
