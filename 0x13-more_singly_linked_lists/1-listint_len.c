#include "lists.h"

size_t listint_len(const listint_t *h)
{
	size_t count;


	if (h != NULL)
	{
		count = listint_len(h->next);
		count = count + 1;
		return (count);
	}
	else
	{
		return (0);
	}
}
