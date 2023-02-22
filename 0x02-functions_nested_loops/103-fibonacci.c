#include <stdio.h>

/**
 * main - Entry to code
 * Description: This function prints the sum
 * of even valued terms
 * Return: Always 0 (success)
 */

int main(void)
{
	int num1, num2, sum;

	num1 = 1;
	num2 = 2;
	sum = 0;

	while (num2 <= 4000000)
	{
	if (num2 % 2 == 0)
	{
	sum += num2;
	}
	int temp = num2;

	num2 = num1 + num2;
	num1 = temp;
	}
	printf("%d\n", sum);
	return (0);
}
