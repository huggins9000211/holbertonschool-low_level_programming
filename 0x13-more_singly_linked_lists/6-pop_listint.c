#include "lists.h"

/**
 * pop_listint - check the code for Holberton School students.
 *
 *@head: list
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	if (head == NULL)
	{
		return (0);
	}
	*head = (*head)->next;
	return ((*head)->n);
}
