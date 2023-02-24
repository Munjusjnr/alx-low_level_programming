#include "main.h"

/**
 * print_triangle - print a triangle with a given input
 * *@size: size of square given the input
 * Return: void
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
	_putchar ('\n');
	}
	else
	{
	for (x = 1; x <= size; x++)
	{
	for (y = x; y < size; y++)
	{
		_putchar (' ');
	}
	for (z = 1; z <= x; z++)
	{
		_putchar ('#');
	}
	_putchar ('\n');
	}
	}
}
