#include "main.h"

/**
 * set_bit - A function that sets the value of bit to 1 at a given index
 * @n: A pointer to a int
 * @index: Index at which the value would be set at 1
 * Return: the value at a new index -1 if otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return (*n |= (1 << index));
}
