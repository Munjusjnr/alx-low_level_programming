#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints an array of integers
 * *@a: first operand that point to the integers
 * *@n: second operand that contains the of array of intergers
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
	printf("%d", a[x]);
	if (x < n - 1)
	{
	printf(", ");
	}
	}
	printf("\n");
}
