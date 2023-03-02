#include "main.h"

/**
 * print_number - this function prints integers
 * *@n: operand for integers
 * Return: void
 */

void print_number(int n)
{
	int res = 1;

	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}
	while (n / res >= 10)
	{
	res *= 10;
	}
	while (res > 0)
	{
	_putchar((n / res) + '0');
	n %= res;
	res /= 10;
	}
}
