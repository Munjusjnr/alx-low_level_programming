#include "dog.h"

/**
 * init_dog - Funtion that initialize the variable of type struct
 * *@d: A pointer to the parameter struct dog
 * *@name: A pointer to the character name
 * *@age: Age of the dog
 * *@owner: A pointer to the character owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age  = age;
		d->owner = owner;
	}
}
