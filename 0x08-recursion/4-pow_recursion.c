#include "main.h"

/**
 * _pow_recursion - print the value of x to the power of y
 * *@x: Operand for given input
 * *@y: Operand for value of power
 * Return: the value of x
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (_pow_recursion(x, y - 1) * x);
}
