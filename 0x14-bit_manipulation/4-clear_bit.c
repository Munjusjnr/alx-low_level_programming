#include "main.h"

/**
 * clear_bit - A function that sets the value of bit to 0 at a given index
 * @n: A pointer to unsigned long int
 * @index: Index at which the value would be set to 0
 * Return: 1 if successful -1 if otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if  (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
