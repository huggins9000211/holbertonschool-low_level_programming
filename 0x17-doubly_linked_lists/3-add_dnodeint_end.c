#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *copy = *head;
    dlistint_t *new = malloc(sizeof(dlistint_t));

    if (new == NULL)
    {
        return (NULL);
    }
    
    new->n = n;
    new->next = NULL;
    if (*head == NULL)
    {
        new->prev = NULL;
        *head = new;
        return(new);
    }
    while (copy->next != NULL)
    {
        copy = copy->next;
    }
    new->prev = copy;
    copy->next = new;
    return(new);
}