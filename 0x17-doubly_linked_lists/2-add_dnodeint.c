#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t));
    if (((*head)->prev) != NULL)
    {
        while ((*head)->prev != NULL)
        {
            *head = (*head)->prev;
        }
        new->n = n;
        new->next = *head;
        new->prev = NULL;
        *head = new;
    }
    return(new);
}
