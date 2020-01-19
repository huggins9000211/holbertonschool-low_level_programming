#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *copy = *head;
    dlistint_t *new = malloc(sizeof(dlistint_t));
    
    if (new == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
    }
    
    new->n = n;
    new->prev = NULL;
    
    if (copy == NULL)
    {
        new->next = NULL;
        *head = new;
        return (new);
    }
    (*head)->prev = new;
    new->next = *head;
    *head = new;
    return (new);
    
}
