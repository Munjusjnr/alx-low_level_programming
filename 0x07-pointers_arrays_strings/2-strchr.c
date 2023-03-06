#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strchr - Function that locates a character in a string
 * *@s: A string input
 * *@c: A character to be found
 * Return: The character if found and null if not found
 */

char *_strchr(char *s, char c)
{
	int i, len;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
	if (s[i] == c)
	{
		return (&s[i]);
	}
	}
	return (NULL);
}
