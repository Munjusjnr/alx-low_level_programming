#include "main.h"
/**
 * add - prints the sum of integers
 * *@a: first operand
 * *@b: second operand
 * Return: Sum of integers
 */

int add(int a, int b)
{
	int sum;

	sum = a + b;

	return (sum);
}

/**
 * sub - prints the subtraction of integers
 * *@a: first operand
 * *@b: second operand
 * Return: difference of integers
 */

int sub(int a, int b)
{
	int s;

	s = a - b;

	return (s);
}

/**
 * mul - prints the product of integers
 * *@a: first operand
 * *@b: second operand
 * Return: product of integers
 */

int mul(int a, int b)
{
	int product;

	product = a * b;

	return (product);
}

/**
 * div - prints the division of integers
 * *@a: first operand
 * *@b: second operand
 * Return: the division of the integers
 */

int div(int a, int b)
{
	int divisor;

	divisor = a / b;

	return (divisor);
}

/**
 * mod - prints the remainder of integers
 * *@a: first operand
 * *@b: second operand
 * Return: remainder of integers
 */

int mod(int a, int b)
{
	int rem;

	rem = a % b;

	return (rem);
}
