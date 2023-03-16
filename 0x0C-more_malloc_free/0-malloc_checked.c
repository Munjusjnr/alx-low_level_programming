#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocated memory using malloc
 * *@b: operand for unsigned int
 * Return: a pointer if successfull 98 if otherwise
 */

void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);
	if (pt == NULL)
	{
		exit(98);
	}
	return (pt);
}
