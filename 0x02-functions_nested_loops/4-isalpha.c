#include "main.h"

/**
 * _isalpha - the function checks whether the letter is
 * lowercase or uppercase
 * * @c: So this parameter has to do with int
 * Return: 1 if the letter is lowercase or uppercase
 * 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
