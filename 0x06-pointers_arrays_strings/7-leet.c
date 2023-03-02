#include "main.h"
#include <string.h>

/**
 * leet - this functions encodes different numbers for characters
 * *@s: character to receive string
 * Return: Encoded message
 */

char *leet(char *s)
{
	char swaps[5] = {'4', '3', '0', '7', '1'};
	char letters[5][2] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'},
	{'t', 'T'}, {'l', 'L'} };
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; j < 5; j++)
	{
	if (s[i] == letters[j][0] || s[i] == letters[j][1])
	{
		s[i] = swaps[j];
		break;
	}
	}
	}
	return (s);
}
