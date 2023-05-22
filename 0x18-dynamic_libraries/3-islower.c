#include "main.h"

/**
 * _islower - checks whether the alphabets are in lowercase
 * * @c: So this parameter has to do with int
 * Return: 1 if the alphapbet is lower. 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
