#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates a character array and initializes it
 * *@size: holder of the size of memory to be allocated
 * *@c: operand for character array
 * Return: character or Null if no size is allocated
 */

char *create_array(unsigned int size, char c)
{
	unsigned int v;

	char *sind = malloc(sizeof(char) * size);

	if (sind == 0)
	{
		return (NULL);
	}
	for (v = 0; v < size; v++)
	{
		sind[v] = c;
	}
	return (sind);
}
