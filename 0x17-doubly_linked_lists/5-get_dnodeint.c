#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    while (head->prev != NULL)
    {
        head = head->prev;
    }
    for (size_t i = 0; i < index; i++)
    {
        head = head->next;
    }
    return(head);
}