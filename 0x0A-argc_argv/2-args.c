#include <stdio.h>

/**
 * main - Entry point for program with two arguments
 * *@argc: Argument for int count
 * *@argv: Argument for pointer to character array
 * Return: 0 when success
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
