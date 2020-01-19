#include "lists.h"
void free_dlistint(dlistint_t *head)
{
    dlistint_t *last;
    while (head != NULL)
    {
        last = head;
        head = last->next;
        free(last);
    } 
}