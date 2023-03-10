#include <stdio.h>

/**
 * main - Entry code for program with two arguments
 * *@argc: Argument for int count
 * *@argv: Argument for pointer to character array
 * Return: 0 when success
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
