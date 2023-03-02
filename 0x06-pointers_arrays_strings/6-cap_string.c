#include "main.h"
#include <ctype.h>

/**
 * cap_string - This function capitalizes all letters of a string
 * *@s: A pointer to string s
 * Return: the letters in the string to be capitalized
 */

char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
	s[0] = toupper(s[0]);
	}
	for (i = 1; s[i] != '\0'; i++)
	{
	if ((s[i] >= 'a' && s[i] <= 'z') && (s[i - 1] == ' ' || s[i - 1] == '\t'
	|| s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
	|| s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '('
	|| s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}'))
	{
		s[i] = toupper(s[i]);
	}
	}
	return (s);
}
