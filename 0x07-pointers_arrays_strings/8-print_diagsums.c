#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that outputs the sum of two diagonals of
 * two square matrix
 * *@a: A pointer to array character a
 * *@size: size of the array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
	sum += *(a + i * size + i);
	sum2 += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", sum, sum2);
}
