#include "main.h"
#include <string.h>

/**
 * string_toupper - converting string from lowercase to uppercase
 * *@s: A pointer to string s
 * Return: The uppercase string
 */

char *string_toupper(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
	if (s[i] >= 97 && s[i] <= 122)
	{
	s[i] -= 32;
	}
	}
	return (s);
}
