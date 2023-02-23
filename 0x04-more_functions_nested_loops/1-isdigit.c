#include "main.h"

/**
 * _isdigit - This function check for a digit 0
 * through 9
 * *@c: operand integer
 * Return: 1 when success, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
