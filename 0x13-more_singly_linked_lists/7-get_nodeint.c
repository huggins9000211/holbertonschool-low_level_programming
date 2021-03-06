#include "lists.h"
/**
 * get_nodeint_at_index - check the code for Holberton School students.
 *
 *@head: list
 *@index: list
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *copy;

	copy = malloc(sizeof(head));
	if (!copy)
	{
		return (NULL);
	}
	while (i < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		copy = head->next;
		head = head->next;
		i++;
	}
	return (copy);
}
