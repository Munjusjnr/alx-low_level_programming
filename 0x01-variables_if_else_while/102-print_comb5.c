#include <stdio.h>

/**
 * main - This code snippet outputs two two-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 100; num1++)
	{
	for (num2 = num1; num2 < 100; num2++)
	{
	putchar (num1 / 10 + '0');
	putchar (num1 % 10 + '0');
	putchar (' ');
	putchar (num2 / 10 + '0');
	putchar (num2 % 10 + '0');
	putchar (num1 == 99 && num2 == 99 ? '\n' : ',');
	putchar (num1 == 99 && num2 == 99 ? '\0' : ' ');
	}
	}
	return (0);
}
