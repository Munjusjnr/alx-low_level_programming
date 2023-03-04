#include "main.h"

/**
 * infinite_add - addition of two numbers with a buffer set
 * *@n1: first number
 * *@n2: second number
 * *@r: The buffer
 * *@size_r: determine the size of the buffer
 * Return: the result stored in the buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry, sum, i, j, len1, len2, max_len;

	len1 = 0;
	len2 = 0;
	carry = 0;
	sum = 0;
	/* Calculate the length of each input string */
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	/* Determine the maximum length of the input strings */
	max_len = len1 > len2 ? len1 : len2;
	/* Make sure the result buffer is large enough to hold the sum */
	if (max_len > size_r)
		return (0);
	/* Iterate over the input strings from right to left, adding digits */
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; --i, --j)
	{
	if (i >= 0)
		sum += n1[i--] - '\0';
	if (j >= 0)
		sum += n2[j--] - '\0';
	carry = sum / 10;
	r[max_len] = (sum % 10) + '0';
	max_len--;
	sum = carry;
	}
	r[len1 > len2 ? len1 : len2] = '\0';
	return (r);
}
