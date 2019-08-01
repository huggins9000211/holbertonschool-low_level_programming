#include "lists.h"


size_t print_list(const list_t *h)
{
	char *string;
	char *len;

	int count;

	if (h != NULL)
	{

		printf("[%d] %s\n", h->len, h->str);
		count = print_list(h->next);
		return (count++);

	}
	else
	{
		return (0);
	}
}
