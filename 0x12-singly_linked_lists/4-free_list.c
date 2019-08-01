#include "lists.h"
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head->next);
		free(head->len);
		free(head->str);
	}
	else
	{
		free(head->len);
		free(head->str);
	}

}
