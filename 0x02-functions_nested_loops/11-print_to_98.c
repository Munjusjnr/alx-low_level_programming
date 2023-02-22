#include "main.h"

/**
 * print_to_98 - prints all natural numbers to 98
 * * @n: operand integer
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
	for (i = n; i < 98; i++)
	{
	_putchar (i);
	_putchar (',');
	_putchar (' ');
	}
	}
	else
	{
	for (i = n; i > 98; i--)
	{
	_putchar (i);
	_putchar (',');
	_putchar (' ');
	}
	}

	_putchar ('98');
	_putchar ('\n');
}
