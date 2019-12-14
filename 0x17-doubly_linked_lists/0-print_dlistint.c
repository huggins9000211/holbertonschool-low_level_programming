#include "lists.h"
size_t print_dlistint(const dlistint_t *h) {
    const dlistint_t *copy = h;
    size_t i = 0;
    if(!h)
    {
        return(0);
    }

    while (copy != NULL)
    {
        printf("%d\n", copy->n);
        copy = copy->next;
        i++;
    }
    return (i);
}
