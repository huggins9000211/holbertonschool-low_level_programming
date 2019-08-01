#ifndef GRANDPARENT_H
#define GRANDPARENT_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t list_len(const list_t *h);
int putstring(char *in);
size_t print_list(const list_t *h);
int _putchar(char c);
list_t *add_node(list_t **head, const char *str);
void free_list(list_t *head);
char *numtostr(int x);



#endif
