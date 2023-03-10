#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to program with two arguments
 * *@argc: Argument count
 * *@argv: Argument vector
 * Return: 0 when success 1 if otherwise
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
		if (!(*argv[i] >= 48 && *argv[i] <= 57))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	}
	return (0);
}
