#include "hash_tables.h"

/**
 * hash_table_create - Hash table data structure
 *
 * @size: The size of the array
 *
 * Return: hashTable
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	hash_node_t **array;

	array = malloc(sizeof(hash_node_t) * size);
	if (array == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->size = size;
	new->array = array;
	return (new);
}
