

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;

	listint_t *copy = *head;
	node = malloc(sizeof(listint_t));
	node->n = n;

	int i =0;
	while (i<=idx)
	{
		node->next = (*copy)->next;
		copy = (*copy)->next;
		i++;
	}

}
