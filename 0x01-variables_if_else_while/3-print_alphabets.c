#include <stdio.h>

/**
 * main - The snippet output all alphabets
 * using putchar function
 * Return: Always (0) success
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar (letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar (letter);
	}
	putchar ('\n');
	return (0);
}
