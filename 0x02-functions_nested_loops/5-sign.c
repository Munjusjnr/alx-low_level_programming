#include "main.h"

/**
 * print_sign - This print function prints out sign in
 * relation to the output of numbers
 * * @n: So this parameter has to do with an int
 * Return: 1 when the number is positive. 0 when it is
 * 0. and -1 when it is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar ('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar ('0');
	return (0);
	}
	else
	{
	_putchar ('-');
	return (-1);
	}
}
