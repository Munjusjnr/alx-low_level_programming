#include "main.h"

/**
 * print_line - print a straight line
 * *@n: operand for length of line
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar ('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	_putchar ('_');
	}
	}
}
