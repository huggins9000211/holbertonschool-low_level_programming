#include "hash_tables.h"
/**
 * hash_table_create - Hash table data structure
 * @size: The size of the array
 * Return: hashTable
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	hash_node_t **array;
	unsigned long int i;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
	{
		return (NULL);
	}

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
	{
		free(new);
		return (NULL);
	}

	new->size = size;
	new->array = array;

	for (i = 0; i < size; i++)
	{
		new->array[i] = NULL;
	}
	return (new);
}
