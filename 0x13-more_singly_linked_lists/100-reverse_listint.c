#include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list
 * @head: double pointer to the head of the list
 * Return: new list reversed
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	previous = NULL;
	next = NULL;
	while ((*head) != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = (*head);
		(*head) = next;
	}
	(*head) = previous;
	return (*head);
}
