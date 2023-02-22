#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers to 98
 * * @n: operand integer
 * Return: void
 */

void print_to_98(int n)
{
	for (int i = n; i != 98; i += (i < 98) ? 1 : -1)
	{
	printf("%d, ", i);
	}
	printf("98\n");
}
