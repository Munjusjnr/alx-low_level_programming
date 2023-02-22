#include <stdio.h>

/**
 * main - Entry to code
 * Description: This function prints the sum
 * of even valued terms
 * Return: Always 0 (success)
 */

int main(void)
{
	int num1, num2, sum, temp;

	num1 = 1;
	num2 = 2;
	sum = 2;
	temp = 0;

	while (num2 <= 4000000)
	{
	temp = second;
	second += first;
	first = temp;

	if (num2 % 2 == 0)
	{
	sum += num2;
	}
	}
	printf("%d\n", sum);
	return (0);
}
