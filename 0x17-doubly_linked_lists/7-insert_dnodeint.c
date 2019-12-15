#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int i = 0;
    dlistint_t *copy = *h;
    dlistint_t *new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        return (NULL);
    }

    
    if (h == NULL)
    {
        return(NULL);
    }
    
    while (i < (idx - 1))
    {
        if (copy->next == NULL)
        {
            return (NULL);
        }
        copy = copy->next;
        i++;
    }
    new->prev = copy->next->prev;
    new->n = n;
    new->next = copy->next;
    copy->next->prev = new;
    copy->next = new;
    return (new);
}