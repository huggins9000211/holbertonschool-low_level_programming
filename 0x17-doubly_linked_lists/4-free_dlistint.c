#include "lists.h"
void free_dlistint(dlistint_t *head)
{
    dlistint_t *last;
    if(head->prev != NULL)
    {

        while (head->prev != NULL)
        {
            head = head->prev;
        }
        while (head != NULL)
        {
            last = head;
            head = head->next;
            free(last);
        } 
    }
    else if (head->next != NULL)
    {
        while (head != NULL)
        {
            last = head;
            head = head->next;
            free(last);
        } 
    }
    else if (head)
    {
        free(head);
    }
}