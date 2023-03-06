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
	memset(s, b, n);
	return (s);

}
