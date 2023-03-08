#include "main.h"

/**
 * _strlen_recursion - printing out the length of a string recursively
 * *@s: A pointer to character s
 * Return: the length of a string or 0 if it is end of the line
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	else
	{
	return (1 + _strlen_recursion(s + 1));
	}
}
