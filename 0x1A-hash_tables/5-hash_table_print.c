#include "hash_tables.h"
/**
 * hash_table_print - Hash table data structure
 *
 * @ht: size
 *
 * Return: hashTable
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0;
	hash_node_t *copy;

	if (ht)
	{
		printf("{");
		while (i < ht->size)
		{
			if (ht->array[i])
			{
				copy = ht->array[i];
				while (copy)
				{
					printf("'%s': '%s'", copy->key, copy->value);
					if (copy->next)
					{
						printf(", ");
					}
					copy = copy->next;
				}
				j = i + 1;
				while (j < ht->size)
				{
					if (ht->array[j])
					{
						printf(", ");
						break;
					}
					j++;
				}
			}
			i++;
		}
		printf("}\n");
	}
}