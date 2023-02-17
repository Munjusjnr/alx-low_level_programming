#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This snippet of code uses the tenary
 * operator to print the right message for the
 * output of random last digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	 b = n % 10;
	 printf("last digit of %d is %d", n, b);

	 n > 5 ? printf(" and is greater than 5\n")
	 : n == 0 ? printf(" and is zero\n")
	 : printf(" and is less than 6 and not zero\n");
	return (0);
}
