#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t));
    new->n = n;
    new->prev = NULL;
    dlistint_t *copy = *head;
    if (copy == NULL)
    {
        new->next = NULL;
        *head = new;
        return (new);
    }
    new->next = *head;
    *head = new;
    return (new);
    
}
