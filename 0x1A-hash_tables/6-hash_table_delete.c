#include "hash_tables.h"

/**
 * hash_table_delete - A function that destroys a hash table
 * @ht: hash table to be destroyed
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *holder;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			holder = current;
			current = current->next;
			free(holder->key);
			free(holder->value);
			free(holder);
		}
	}
	free(ht->array);
	free(ht);
}
