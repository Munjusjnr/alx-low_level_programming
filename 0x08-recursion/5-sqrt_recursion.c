#include "main.h"
/* function declaration for _sqrt_helper function */
int _sqrt_helper(int n, int start, int end);
/**
 * _sqrt_recursion - output the square root of a given integer
 * *@n: operand for integer
 * Return: The square_helper function computing the root of given int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0, n));
}
/**
 * _sqrt_helper - The function takes the given int and uses binary search by
 * bisecting it
 * *@n: operand for integer
 * *@start: this indicates where the binary starts
 * *@end: indicates the binary ends
 * Return: The computed square root
 */
int _sqrt_helper(int n, int start, int end)
{
	int mid, square;

	if (start > end)
	{
		return (-1);
	}
	mid = (start + end) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_sqrt_helper(n, mid + 1, end));
	}
	else
	{
		return (_sqrt_helper(n, start, mid - 1));
	}
}
