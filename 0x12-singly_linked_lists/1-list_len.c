#include "lists.h"


size_t list_len(const list_t *h)
{
	size_t count;





	if (h != NULL)
	{

		count = list_len(h->next);
		count = count + 1;
		return (count);

	}
	else
	{
		return (0);
	}
}
