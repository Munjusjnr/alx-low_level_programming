#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to program with two arguments
 * *@argc: Argument count
 * *@argv: argument vector
 * Return: 0 when success 1 if otherwise
 */

int main(int argc, char *argv[])
{
	int i, x, pro;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		x = atoi(argv[2]);
		pro = i * x;
		printf("%d\n", pro);
	}
	return (0);
}
