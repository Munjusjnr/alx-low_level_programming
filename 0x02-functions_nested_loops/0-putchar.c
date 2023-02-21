#include <stdio.h>

/**
 * main- Using putchar function to output
 * Return: Always 0 (Succcess)
 */

int main(void)
{
	int i;
	const char *str = "_putchar";

	for (i = 0; str[i] != '\0'; i++)
	putchar (str[i]);
	putchar ('\n');
	return (0);
}
