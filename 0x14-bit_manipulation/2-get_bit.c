#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 * @n: operand holding the bit value
 * @index: index of the bit wanted
 * Return: the value of bit at index or -1 if failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
