#include "hash_tables.h"
/**
 * key_index - Hash table data structure
 *
 * @key: The size of the array
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 *
 * @value: size
 *
 * @ht: size
 *
 * Return: hashTable
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;
	char *valueCopy;

	valueCopy = malloc(sizeof(value));
	if (valueCopy == NULL)
	{
		return (0);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0);
	}
	if (key[0] == '\0')
	{
		return (0);
	}
	strcpy(valueCopy, value);
	index = key_index(keyCopy2, ht->size);
	new->key = key;
	new->value = valueCopy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
