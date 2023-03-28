#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - printf opcodes function
 * @n_bytes: number of bytes
 * Return: void
 */

void print_opcodes(int n_bytes)
{
	int i;
	unsigned char *ptr = (unsigned char *) print_opcodes;

	for (i = 0; i < n_bytes; i++)
	{
		printf("%02x", *(ptr + i));
	}
	printf("\n");
}

/**
 * main - Entry point to code
 * @argc: Argument count
 * @argv: a pointer to pointer argument vector
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	int n_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n_bytes = atoi(argv[1]);
	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes(n_bytes);
	return (0);
}
