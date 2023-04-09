#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to go from one number to another.
 * @n: operand to be flipped
 * @m: destination operand
 * Return: the number of bit to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, count = 0;

	i = n ^ m;
	while (i)
	{
		i = i & (i - 1);
		count++;
	}
	return (count);
}
