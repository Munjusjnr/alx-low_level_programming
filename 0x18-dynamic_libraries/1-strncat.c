#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings but takes into
 * consideration the number of characters string 2 passes to string 1
 * *@dest: a pointer to string that would be modified
 * *@src: a pointer to string that would be appended
 * *@n: number of character to be appended
 * Return: the new appended string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
