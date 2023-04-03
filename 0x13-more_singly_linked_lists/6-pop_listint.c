#include "lists.h"

/**
 * pop_listint - function that deletes the head node of the list
 * @head: A pointer to a pointer to the head of the list
 * Return: the head's nodes data n
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int val;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		current = *head;
		val = current->n;
		(*head) = (*head)->next;
		free(current);
	}
	return (val);
}
