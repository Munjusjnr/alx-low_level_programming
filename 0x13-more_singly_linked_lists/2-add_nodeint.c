#include "lists.h"

/**
 * add_nodeint - Add an int node to start of list
 * @head: A pointer to a pointer to the head of the list
 * @n: An integer
 * Return: head of the list and new node appended to it
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
