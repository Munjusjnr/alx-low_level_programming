#include "main.h"

/**
 * print_to_98 - prints all natural numbers to 98
 * * @n: operand integer
 * Return: void
 */

void print_to_98(int n)
{
	for (n = 0; n < 99; n++)
	{
	_putchar (n);
	_putchar (',');
	_putchar (' ');
	}
}
