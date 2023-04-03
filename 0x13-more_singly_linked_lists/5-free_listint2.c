#include "lists.h"

/**
 * free_listint2 - A function that frees a list
 * @head: A pointer to a pointer to the head of a list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	current = *head;
	while (current != NULL)
	{
		next = current;
		current = current->next;
		free(next);
	}
	*head = NULL;
}
