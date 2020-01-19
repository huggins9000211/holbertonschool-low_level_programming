#include "hash_tables.h"
/**
 * key_index - Hash table data structure
 *
 * @key: The size of the array
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 *
 * @size: size
 *
 * Return: hashTable
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result;

	result = hash_djb2(key) % size;
	return (result);
}
