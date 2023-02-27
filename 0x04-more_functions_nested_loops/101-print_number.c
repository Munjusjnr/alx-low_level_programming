#include "main.h"

/**
 * print_number - print an integer
 * *@n: operand for integer
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
	_putchar ('-');
	n = -n;
	}
	else
	{
	n / 10;
	}
	_putchar (n % 10 + '0');
}
