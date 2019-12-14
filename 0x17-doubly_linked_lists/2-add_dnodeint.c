#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t));
    dlistint_t *copy = *head;

    new->n = n;
    new->prev = NULL;
    
    if (copy == NULL)
    {
        new->next = NULL;
        *head = new;
        return (*head);
    }
    new->next = *head;
    *head = new;
    return (*head);
    
}
