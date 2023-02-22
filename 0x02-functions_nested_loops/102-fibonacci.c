#include <stdio.h>

/**
 * main - Entry point for code
 * Description: This function prints out fibonacci
 * numbers starting from 1 to 50
 * Return: Always 0 (success)
 */

int main(void)
{
	int fibo1 = 1, int fibo2 = 2, int next_fib, int x;

	printf("%d, %d", fibo1, fibo2);
	for (x = 3; x <= 50; x++)
	{
	next_fib = fibo1 + fibo2;
	printf(", %d", next_fib);
	fibo1 = fibo2;
	fibo2 = next_fib;
	}
	printf("\n");
	return (0);
}
