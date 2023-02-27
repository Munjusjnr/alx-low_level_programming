#include <stdio.h>
#include <math.h>

/**
 * main - Entry point to code
 * Description: prints out the largest prime number
 * Return: Always 0 (success)
 */

int main(void)
{
	long int n = 612852475143L;
	int largest = 2;

	while (largest <= sqrt(n))
	{
		if (n % largest == 0)
		{
		n /= largest;
		}
		else
		{
		largest++;
		}
	}
	printf("%ld\n", n);
	return (0);
}
