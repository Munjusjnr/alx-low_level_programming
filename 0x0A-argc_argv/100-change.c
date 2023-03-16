#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to code
 * *@argc: Argument count
 * *@argv: argument vector
 * Return: 0 when successful 1 if otherwise
 */

int main(int argc, char *argv[])
{
	int cents, count, n_coins, coin_count, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	n_coins = sizeof(coins) / sizeof(coins[0]);
	count = 0;
	for (i = 0; i < n_coins; i++)
	{
	coin_count = cents / coins[i];
	count += coin_count;
	cents -= coin_count * coins[i];
	}
	printf("%d\n", count);
	return (0);
}
