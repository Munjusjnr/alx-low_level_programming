#include "main.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring
 * *@haystack: A pointer to character string haystack
 * *@needle: A pointer to character string needle
 * Return: haystack if there is an occurrance of string or null if not
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	char *p = haystack;
	char *s = needle;

	while (*p != '\0' && *s != '\0' && *p == *s)
	{
		p++;
		s++;
	}
	if (*s == '\0')
	{
		return (haystack);
	}
	haystack++;
	}
	return (NULL);
}
