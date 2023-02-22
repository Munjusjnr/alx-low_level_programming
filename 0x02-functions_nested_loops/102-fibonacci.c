#include <stdio.h>

/**
 * main - Entry point for code
 * Description: This function prints out fibonacci
 * numbers starting from 1 to 50
 * Return: Always 0 (success)
 */

int main(void)
{
	int fibo1, fibo2, x;
	long int fib[50];

	fibo1[0] = 1;
	fibo2[1] = 2;

	printf("%ld, %ld", fibo1[0], fibo2[1]);
	for (x = 2; x < 50; x++)
	{
	fib[x] = fib[x - 1] + fib[x - 2];
	printf(", %ld", fib[x]);
	}
	printf("\n");
	return (0);
}
