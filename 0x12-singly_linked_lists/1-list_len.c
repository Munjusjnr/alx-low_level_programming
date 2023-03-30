#include "lists.h"

/**
 * list_len - functions that returns elements in a linked list
 * @h: A pointer to the head of the linked list
 * Return: the number of the elements
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
