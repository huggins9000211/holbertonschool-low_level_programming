#include "lists.h"
size_t dlistint_len(const dlistint_t *h)
{
    const dlistint_t *copy = h;
    size_t i = 0;
    if(!h)
    {
        return(0);
    }

    while (copy != NULL)
    {
        copy = copy->next;
        i++;
    }
    return (i);
}