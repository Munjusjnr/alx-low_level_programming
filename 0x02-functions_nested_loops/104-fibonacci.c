#include <stdio.h>

/**
 * main - Entry point to code
 * Description: This function prints out the first
 * 98 fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	double a, b, temp;
	int i;

	a = 1;
	b = 2;

	printf("%.0f, %.0f, ", a, b);
	for (i = 3; i <= 98; i++)
	{
	temp = b;
	b = a + b;
	a = temp;
	printf("%.0f", b);
	if (i < 98)
	{
	printf(", ");
	}
	}
	printf("\n");
	return (0);
}
