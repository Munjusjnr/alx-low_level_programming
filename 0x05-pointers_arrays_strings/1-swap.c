#include "main.h"

/**
 * swap_int - Swapping the values of integers
 * *@a: first operand
 * *@b: second operand
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
