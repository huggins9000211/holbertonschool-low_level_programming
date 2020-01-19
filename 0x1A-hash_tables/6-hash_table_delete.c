#include "hash_tables.h"
/**
 * hash_table_delete - Hash table data structure
 *
 * @ht: size
 *
 * Return: hashTable
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *copy = NULL, *extra = NULL;

	while (i < ht->size)
	{
		if (ht->array[i])
		{
			copy = ht->array[i];
			while (copy)
			{
				extra = copy;
				copy = copy->next;
				free(extra->key);
				free(extra->value);
				free(extra);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
