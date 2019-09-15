#include "lists.h"
int sum_dlistint(dlistint_t *head)
{
    int i = 0;
    while (head != NULL)
    {
        i = i + head->n;
        head = head->next;
    }
    return (i);
}