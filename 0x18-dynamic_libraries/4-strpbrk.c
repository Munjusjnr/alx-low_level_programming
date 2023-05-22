#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function that searches a string for any of byte
 * *@s: A pointer to character string s
 * *@accept: A pointer to character string accept
 * Return: String after first occurrance of character or Null if not
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
	char *p = accept;

	while (*p != '\0')
	{
	if (*s == *p)
	{
		return (s);
	}
	p++;
	}
	s++;
	}
	return (NULL);
}
