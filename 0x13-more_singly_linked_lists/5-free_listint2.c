#include "lists.h"
/**
 * free_listint2 - check the code for Holberton School students.
 *
 *@head: list
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
