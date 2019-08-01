#include "lists.h"
void free_list(list_t *head);
{
	if (h != NULL)
	{
		free_list(h->next);
		free(h->next);
		free(h->len);
		free(h->str);
	}
	else
	{
		free(h->len);
		free(h->str);
	}

}
