#include "hash_tables.h"

/**
 * key_index - This function gets the index of the key
 * @key: key in the hash table
 * @size: size of the array
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, index;

	if (key == NULL)
		return (0);

	hash_value = hash_djb2(key);
	index = hash_value % size;
	return (index);
}
