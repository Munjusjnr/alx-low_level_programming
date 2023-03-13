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

	if (s1 == NULL && s2 == NULL)
	{
		return ("");
	}
	else if (s1 == NULL)
	{
		return (s2);
	}
	else if (s2 == NULL)
	{
		return (s1);
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	p = malloc(len1 + len2 + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	strcpy(p, s1);
	strcat(p, s2);

	return (p);
}
