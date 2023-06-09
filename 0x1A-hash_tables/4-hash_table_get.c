#include "hash_tables.h"

/**
 * hash_table_get -  This function retrieves the value associated to the key
 * in the hash table
 * @ht: hash table to look into
 * @key: the key the value is associated to
 * Return: NULL if failure value if success
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	if (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
	}
	return (NULL);
}
