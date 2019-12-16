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
        
            new->n = n;
            new->next = NULL;
            new->prev = NULL;
            *h = new;
            return(new);

        
        return(NULL);
    }
    if (idx == 0)
    {
        new->prev = NULL;
        new->n = n;
        new->next = copy;
        copy->prev = new;
        *h = new;
        return (new);
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
    new->prev = copy;
    new->n = n;
    if (copy->next)
    {
        new->next = copy->next;
        copy->next->prev = new;
    }
    else
    {
        new->next = NULL;
    }
    copy->next = new;
    return (new);
}