#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return(new);
	}
	if ((*head)->next == NULL)
	{
		(*head)->next = new;
	}
	else
	{

		add_nodeint_end(&((*head)->next), n);
	}
	return(new);

}
