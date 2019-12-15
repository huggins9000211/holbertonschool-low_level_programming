#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *copy = *head;
    unsigned int i = 0;
    if (head == NULL)
    {
        return (-1);
    }
    if (index == 0)
    {
        if ((*head)->next == NULL)
        {
            (*head) = NULL;
            return (1);
        }
        
        if ((*head)->next->next)
        {
            (*head)->next->next->prev = (*head);
        }
        *head = (*head)->next;
        return (1);
    }
    
    while (i < (index - 1))
    {
        if (copy->next == NULL)
        {
            return (-1);
        }
        copy = copy->next;
        i++;
    }
    copy->next->next->prev = copy;
    copy->next = copy->next->next;
    return (1);
}