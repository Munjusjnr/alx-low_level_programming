#include "main.h"

/**
 * print_diagonal - print a given input diagonally
 * *@n: operand for number of times
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	_putchar ('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{
	_putchar (' ');
	}
	_putchar (92);
	}
	_putchar ('\n');
	}
}
