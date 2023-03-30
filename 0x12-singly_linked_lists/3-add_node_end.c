#include "lists.h"

/**
 * add_node_end - Adds a node to end of list
 * @head: A pointer to a pointer to the head of the list
 * @str: A string to be stored in  new node
 * Return: head of list and new node appended to it
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t  *lastnode, *currentnode;

	lastnode = malloc(sizeof(list_t));

	if (lastnode == NULL)
		return (NULL);
	lastnode->str = strdup(str);

	if (lastnode->str == NULL)
	{
		free(lastnode);
		return (NULL);
	}
	lastnode->len = strlen(str);
	lastnode->next = NULL;
	if (*head == NULL)
	{
		*head = lastnode;
	}
	else
	{
		currentnode = *head;
		while (currentnode->next != NULL)
		{
			currentnode = currentnode->next;
		}
		currentnode->next = lastnode;
	}
	return (*head);
}
