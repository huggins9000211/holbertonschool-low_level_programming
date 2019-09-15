#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t));
    new->n = n;
    new->next = *head;
    *head = new;
    return(new);
}
