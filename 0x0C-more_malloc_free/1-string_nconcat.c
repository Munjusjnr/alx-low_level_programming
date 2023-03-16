#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - string concatenation with respect to number of bytes
 * *@s1: A pointer to character string one
 * *@s2: A pointer to character string two
 * *@n: Number of bytes to be allocated for string two
 * Return: A pointer to allocated memory containing new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t str, str2, str3, i;
	char *x;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	str = strlen(s1);
	str2 = strlen(s2);
	if (str2 >= n)
	{
		str2 = n;
	}
	str3 = (str + str2 + 1);
	x = malloc(str3);
	if (x == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*s1 != '\0' && i < str3 - 1)
	{
		x[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0' && i < str3 - 1)
	{
		x[i] = *s2;
		s2++;
		i++;
	}
	x[i] = '\0';
	return (x);
}
