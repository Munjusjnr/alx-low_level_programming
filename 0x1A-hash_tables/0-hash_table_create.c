#include "hash_tables.h"

/**
 * hash_table_create - This function seeks to create a new hash table
 * @size: This parameter denotes the size of the array
 * Return:  a new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = NULL;
	unsigned long int i;

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);

	new_hash->array = malloc(sizeof(hash_node_t) * size);
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_hash->array[i] = NULL;
	}
	new_hash->size = size;
	return (new_hash);
}
