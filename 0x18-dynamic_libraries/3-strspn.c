#include "main.h"

/**
 * _strspn - function that finds the length of a prefix substring
 * *@s: A pointer to character s
 * *@accept: A pointer to character accept
 * Return: length of the substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	{
		length++;
		break;
	}
	}
	if (s[i] != accept[j])
	{
		return (length);
	}
	}
	return (length);
}
