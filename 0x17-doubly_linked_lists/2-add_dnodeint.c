#include "lists.h"

/**
 * add_dnodeint - Add a node at the beginning of a linked list
 * @head: A pointer to head of the linked list
 * @n: A constant integer
 * Return: new node or Null if failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;
	if ((*head) != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
