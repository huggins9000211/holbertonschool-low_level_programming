#include "lists.h"

int sum_listint(listint_t *head)
{
	int count;
	listint_t *copy;

	count = 0;
	copy = malloc(sizeof(head));
	copy = head;
	if (!copy)
	{
		return (0);
	}
	while (copy->next != NULL)
	{
		count = count + copy->n;
		copy = copy->next;
	}
	count = count + copy->n;
	count++;
	return (count);
}
