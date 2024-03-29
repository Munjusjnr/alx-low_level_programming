#include "lists.h"

/**
 * add_node - Add a new node at the beginning of a linked list
 * @head: A pointer to a pointer to the head of the list
 * @str: A pointer to a string
 * Return: a new string
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
