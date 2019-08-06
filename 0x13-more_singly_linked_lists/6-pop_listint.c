#include "lists.h"


int pop_listint(listint_t **head)
{
	if (head == NULL)
	{
		return (0);
	}
	*head = (*head)->next;
	return (1);
}
