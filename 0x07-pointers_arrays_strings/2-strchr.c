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
	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
