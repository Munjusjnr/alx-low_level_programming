#include "hash_tables.h"

/**
 * hash_table_set - This function adds an element to the hash table
 * @ht: head of the table
 * @key: key in the table
 * @value: value attached to key
 * Return: 1 if success 0 if failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
