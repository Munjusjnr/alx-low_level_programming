#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - A function that prints buffer
 * *@b: a pointer b character
 * *@size: size of the buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, j;
	unsigned char c;

	for (i = 0; i < size; i += 10)
	{
	printf("%08x: ", i);
	for (j = 0; j < 10; j++)
	{
	if (i + j < size)
		printf("%02x", *(b + i + j));
	else
		printf("  ");
	if (j % 2 == 1)
		printf(" ");
	}
	for (j = 0; j < 10; j++)
	{
	if (i + j < size)
	{
		c = *(b + i + j);
	if (isprint(c))
		printf("%c", c);
	else
		printf(".");
	}
	}
	printf("\n");
	}
}
