#include "main.h"
#include <string.h>

/**
 * _memset - fills an area of memory with constant byte
 * *@s: A pointer to character s
 * *@b: the byte to fill the memory
 * *@n: number of times to fill the memory
 * Return: The memory block containing the bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	*(s + i) = b;
	}
	return (s);

}
