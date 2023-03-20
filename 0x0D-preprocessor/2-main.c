#include <stdio.h>

/**
 * main -  Entry point to the program
 * Description: outputs the name of the file it was compiled on
 * Return: 0 when success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
