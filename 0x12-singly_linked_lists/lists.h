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

int putstring(char *in);
size_t print_list(const list_t *h);
int _putchar(char c);
char *numtostr(int x);



#endif
