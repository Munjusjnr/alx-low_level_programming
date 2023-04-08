#include "main.h"

/**
 * binary_to_uint -  A function to convert binary to unsigned int
 * @b: A pointer to string of 0 and 1
 * Return: the value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0, j = 1, length;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	length = strlen(b);
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			x += j;
		}
		j *= 2;
	}
	return (x);
}
