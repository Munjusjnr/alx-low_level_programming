#include "main.h"
/* Function declaration to be called by wildcmp */
int wildhelp(char *s1, char *s2, int i1, int i2);
/**
 * wildcmp - function that compares two strings and output if identical
 * *@s1: A pointer to first character string
 * *@s2: A pointer to second character string
 * Return: 1 if identical 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	return (wildhelp(s1, s2, 0, 0));
}
/**
 * wildhelp - Function that would be called by the wildcmp function
 * *@s1: A pointer to first character string
 * *@s2: A pointer to second character string
 * *@i1: operand for first string
 * *@i2: operand for second string
 * Return: wilhep fucntion recursively until base is fulfilled
 */
int wildhelp(char *s1, char *s2, int i1, int i2)
{
	if (s2[i2] == '\0')
	{
		return (s1[i1] == '\0');
	}
	else if (s2[i2] == '*')
	{
		if (s1[i1] == '\0')
		{
			return (wildhelp(s1, s2, i1, i2 + 1));
		}
		else
		{
			return ((wildhelp(s1, s2, i1 + 1, i2)) || (wildhelp(s1, s2, i1, i2 + 1)));
		}
	}
	else if (s1[i1] == s2[i2])
	{
		return (wildhelp(s1, s2, i1 + 1, i2 + 1));
	}
	else
	{
		return (0);
	}
}
