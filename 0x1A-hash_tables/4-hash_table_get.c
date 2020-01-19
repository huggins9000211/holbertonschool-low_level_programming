#include "hash_tables.h"
/**
 * hash_table_get - Hash table data structure
 *
 * @key: The size of the array
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 *
 * @ht: size
 *
 * Return: hashTable
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *location = ht->array[index];

	while (location)
	{
		if (location->key == key)
		{
			return (location->value);
		}
		location = location->next;
	}
	return (NULL);
}
