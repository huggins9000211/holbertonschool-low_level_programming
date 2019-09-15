#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t));
    unsigned int i = 0;
    while ((*h)->prev != NULL)
    {
        (*h) = (*h)->prev;
    }
    while (i < idx)
    {
        if ((*h) == NULL)
        {
            return (NULL);
        }

        if (i == idx - 1)
        {
            new->prev = (*h);
        }
        (*h) = (*h)->next;
        i++;
    }
    new->n = n;
    new->next = (*h);
    (*h) = new;
    return (new);
}