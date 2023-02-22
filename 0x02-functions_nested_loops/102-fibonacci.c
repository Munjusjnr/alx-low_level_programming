#include <stdio.h>

/**
 * main - Entry point for code
 * Description: This function prints out fibonacci
 * numbers starting from 1 to 50
 * Return: Always 0 (success)
 */

int main(void)
{
	int fibo1 = 1, fibo = 2, next_fibo, x;

	printf("%d, %d", fibo1, fibo2);
	for (x = 3; x <= 50; x++)
	{
	next_fibo = fibo1 + fibo2;
	printf(", %d", next_fibo);
	fibo1 = fib02;
	fib02 = next_fibo;
	}
	printf("\n");
	return (0);
}
