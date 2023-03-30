#include "lists.h"

/**
 * free_list - free the memory of a linked list
 * @head: A pointer to the head of the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp, *next;

	temp = head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp->str);
		free(temp);
		temp = next;
	}
}
