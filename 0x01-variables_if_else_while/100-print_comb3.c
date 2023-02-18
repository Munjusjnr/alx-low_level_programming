#include <stdio.h>

/**
 * main - prints combinations of single digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int b, v;

	for (b = 0; b <= 8; b++)
	{
	for (v = b + 1; v <= 9; v++)
	{
	putchar (b + '0');
	putchar (v + '0');
	if (b != 8 || v != 9)
	{
	putchar (',');
	putchar (' ');
	}
	}
	}
	putchar ('\n');
	return (0);
}
