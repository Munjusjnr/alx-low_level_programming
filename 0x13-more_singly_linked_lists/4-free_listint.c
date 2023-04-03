#include "lists.h"

/**
 * free_listint - A function that frees a list
 * @head: A pointer to the head of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
