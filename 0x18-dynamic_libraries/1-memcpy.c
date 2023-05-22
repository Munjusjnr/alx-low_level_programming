#include "main.h"

/**
 * _memcpy - This function copies memory area from src to dest
 * *@dest: A pointer to character destination
 * *@src: A pointer to character source
 * *@n: The number of times the copy would be made
 * Return: final content of destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *src_char = (char *)src;
	char *dest_char = (char *)dest;

	for (i = 0; i < n; i++)
	{
	dest_char[i] = src_char[i];
	}
	return (dest);
}
