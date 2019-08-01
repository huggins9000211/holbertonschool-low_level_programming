void free_list(list_t *head);
{
	size_t count;





	if (h != NULL)
	{

		count = list_len(h->next);
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
