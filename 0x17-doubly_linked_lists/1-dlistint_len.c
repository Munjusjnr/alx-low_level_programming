#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in a list
 * @h: A pointer to the head of a double linked list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
