#include "main.h"
#include <string.h>
/* function declaration for is-palindrome_hell */
int is_palindrome_hell(char *s, int start, int end);
/**
 * is_palindrome - Function that returns if a string is palindrome or not
 * *@s: A pointer to a string
 * Return: 1 when it is a palindrome 0 if not
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_hell(s, 0, len - 1));
}
/**
 * is_palindrome_hell - The functions take the string and computes its outcome
 * *@s: A pointer to a character string
 * *@start: Operand for start of string
 * *@end: opereand for end of string
 * Return: the function itself
 */
int is_palindrome_hell(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (is_palindrome_hell(s, start + 1, end - 1));
	}
}
