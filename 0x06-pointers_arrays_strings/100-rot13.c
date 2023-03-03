#include "main.h"

/**
 * rot13 - function that applies the rot13 substitution cipher
 * *@s: operand for string
 * Return: the string substituted
 */

char *rot13(char *s)
{
	char encode[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char decode[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; j < 52; j++)
	{
	if (s[i] == decode[j])
	{
	s[i] = encode[j];
	break;
	}
	}
	}
	return (s);
}
