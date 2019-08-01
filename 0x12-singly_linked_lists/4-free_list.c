#include "lists.h"
void free_list(list_t *head);
{
	if (head != NULL)
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
