#include "main.h"
/* function declaration of is_prime_helper */
int is_prime_helper(int n, int divisor);
/**
 * is_prime_number - This function checks whether an input is prime
 * *@n: operand for given number
 * Return: the is_prime_helper function
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, 3));
	}
}
/**
 * is_prime_helper - This function checks whether the input is prime
 * *@n: operand for given number
 * *@divisor: checks whether the input meets a criteria
 * Return: 0 when not prime, 1 when otherwise
 */
int is_prime_helper(int n, int divisor)
{
	if (n == divisor)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, divisor + 2));
	}
}
