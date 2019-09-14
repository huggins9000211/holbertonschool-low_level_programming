#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *copy = *head;
    dlistint_t *new = malloc(sizeof(dlistint_t));
    new->n = n;
    new->next = NULL;
    *head = new;
    if (*head == NULL)
    {
        *head = new;
    }
    while (copy->next)
    {
        copy = copy->next;
    }
    copy->next = new;
    
}