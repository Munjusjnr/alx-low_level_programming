#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings and allocation memory
 * *@s1: operand for first string
 * *@s2: operand for second string
 * Return: A pointer to allocated memory space which contains final string
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	size_t len1, len2;

	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	p = malloc(len1 + len2 + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	memcpy(p, s1, len1);
	memcpy(p + len1, s2, len2);
	p[len1 + len2] = '\0';

	return (p);
}
