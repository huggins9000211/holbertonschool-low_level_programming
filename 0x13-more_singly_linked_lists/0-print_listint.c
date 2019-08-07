#include "lists.h"
/**
 * print_listint - check the code for Holberton School students.
 *
 *@h: list
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	size_t count;





	if (h != NULL)
	{

		printf("%d\n", h->n);
		count = print_listint(h->next);
		count = count + 1;
		return (count);

	}
	else
	{
		return (0);
	}
}
