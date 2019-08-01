#include "lists.h"


size_t print_list(const list_t *h)
{
	size_t count;





	if (h != NULL)
	{

		printf("[%d] %s\n", h->len, h->str);
		count = print_list(h->next);
		count = count + 1;
		return (count);

	}
	else
	{
		return (0);
	}
}
