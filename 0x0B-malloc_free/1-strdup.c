#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Uses strdup function to allocates memory to copied string
 * *@str: String to be duplicated
 * Return: duplicated string when success or null when failed
 */

char *_strdup(char *str)
{
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	p = strdup(str);
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
