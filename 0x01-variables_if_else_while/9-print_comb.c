#include <stdio.h>

/**
 * main - outputs single digit combinations
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = x + 1; y < 10; y++)
	{
	putchar (x + '0');
	putchar (y + '0');
	putchar ((x == 8 && y == 9) ? '\n' : ',');
	putchar ((x == 8 && y == 9) ? '\0' : ' ');
	}

	}
	return (0);
}
