#include "main.h"
#include <string.h>

/**
 * _strcat - This functions concatenates two strings
 * *@dest: first string
 * *@src: second string
 * Return: The final string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
