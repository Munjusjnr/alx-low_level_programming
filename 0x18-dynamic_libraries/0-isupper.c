#include "main.h"

/**
 * _isupper - Checks whether the character is uppercase
 * *@c: operand character
 * Return: 1 if successful 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
