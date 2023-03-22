#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Entry point to code
 * @argc: command line argument passed
 * @argv: A pointer to character argv of number of arguments
 * Return: 0 if successful null if otherwise
 */

int main(int argc, char *argv[])
{
	int v, x, result;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	v = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && v == 0)
	{
		printf("Error\n");
		exit(100);
	}
	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = ptr(x, v);
	printf("%d\n", result);
	return (0);
}
