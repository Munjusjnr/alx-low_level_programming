#include "main.h"

/**
 * leet - this functions encodes different numbers for characters
 * *@x: character to receive string
 * Return: Encoded message
 */

char *leet(char *x)
{
	static char encode[1000];
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
	if (x[i] == 'a' || x[i] == 'A')
	{
		encode[i] = '4';
	}
	else if (x[i] == 'e' || x[i] == 'E')
	{
		encode[i] = '3';
	}
	else if (x[i] == 'o' || x[i] == 'O')
	{
		encode[i] = '0';
	}
	else if (x[i] == 't' || x[i] == 'T')
	{
		encode[i] = '7';
	}
	else if (x[i] == 'l' || x[i] == 'L')
	{
		encode[i] = '1';
	}
	else
	{
	encode[i] = x[i];
	}
	}
	return (encode);
}
