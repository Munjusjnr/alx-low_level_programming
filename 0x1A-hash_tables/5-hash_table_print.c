#include "hash_tables.h"

/**
 * hash_table_print - This function prints the hash table out
 * @ht: table to be printed out
 * Return: Null if failure hash table if success
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int first_hnode = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (!first_hnode)
			{
				printf(", ");
			}
			printf("'%s': '%s'", current->key, current->value);
			first_hnode = 0;
			current = current->next;
		}
	}
	printf("}\n");
}
