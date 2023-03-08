#include "main.h"

/**
 * factorial - prints the factorial of a given integer
 * *@n: A given integer
 * Return: the factorial of the given integer
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
