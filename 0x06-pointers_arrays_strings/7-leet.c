#include "main.h"
#include <string.h>

/**
 * leet - this functions encodes different numbers for characters
 * *@x: character to receive string
 * Return: Encoded message
 */

char *leet(char *x)
{
	static char encode[1000];
	char leetChars[] = {'4', '3', '0', '7', '1'};
	int i, j, len;

	len = strlen(x);
	for (i = 0; i < len; i++)
	{
	encode[i] = x[i];
	for (j = 0; j < 5; j++)
	{
	if (x[i] == 'a' + j || x[i] == 'A' + j)
	{
		encode[i] = leetChars[j];
		break;
	}
	}
	}
	return (encode);
}
