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
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
		j = 0;
		while (*(argv[i] + j))
		{
		if (!(*(argv[i] + j) >= 48 && *(argv[i] + j) <= 57))
		{
			printf("Error\n");
			return (1);
		}
		j++;
		}
		sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	}
	return (0);
}
