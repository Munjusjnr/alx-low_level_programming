#include <stdio.h>

/**
 * main - This snippet outputs three single digit combinations
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
	for (j = i + 1; j < 9; j++)
	{
	for (k = j + 1; k < 10; k++)
	{
	if (i != j && i != k && j != k)
	{
	putchar ('0' + i);
	putchar ('0' + j);
	putchar (',');
	putchar (' ');
	putchar ('0' + k);
	putchar ('\n');
	}
	}
	}
	}
	return (0);
}
