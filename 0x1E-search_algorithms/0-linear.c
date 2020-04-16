#include "search.h"
#include <stdio.h>

int linear_search(int *array, size_t size, int value)
{
    int i = 0;
    int sizee = size;

    if (array == 0)
        return (-1);

    while (i < sizee)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
        i++;
    }
    return (-1);
}