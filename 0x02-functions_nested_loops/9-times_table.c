#include "main.h"

/**
 * times_table - print times table for 9
 * Return: void
 */

void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	prod = i * j;
	if (j == 0)
	{
	_putchar ('0');
	}
	else if (prod < 10)
	{
	_putchar (',');
	_putchar (' ');
	_putchar (' ');
	_putchar (prod + '0');
	}
	else
	{
	_putchar (',');
	_putchar (' ');
	_putchar (prod / 10 + '0');
	_putchar (prod % 10 + '0');
	}
	}
	_putchar ('\n');
	}
}
