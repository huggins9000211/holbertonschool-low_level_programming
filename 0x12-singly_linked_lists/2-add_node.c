#include "lists.h"

int _strlen(char *string)
{
	int i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *_strdup(const char *string)
{
	char *result;

	int i = 0;
	int count = 0;

	while (string[i] != '\0')
	{
		count++;
	}

	result = malloc(count + 1);
	if (result == NULL)
	{
		return (NULL);
	}



	while (string[i] != '\0')
	{
		result[i] = string[i];
		i++;
	}
	return (result);
}

list_t *add_node(list_t **head, const char *str)
{

	size_t count;
	list_t *node;
	char *copy;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return NULL;

	node.next = head->next;
	copy = _strdup(str);
	node->str = copy;
	node->len = _strlen(copy);
	head->next = node;
	return (&node);
}
