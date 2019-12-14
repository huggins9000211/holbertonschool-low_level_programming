#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *copy = *head;
    dlistint_t *new = malloc(sizeof(dlistint_t));
    
    if (new == NULL)
    {
        return (NULL);
    }
    
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
