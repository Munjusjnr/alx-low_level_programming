#include "main.h"
#include <string.h>

/**
 * _strncpy  - Function to copy from one string to another
 * *@dest: first string
 * *@src: string to be appended
 * *@n: number of characters to be appended
 * Return: the final copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
