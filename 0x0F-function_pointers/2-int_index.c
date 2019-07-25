#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - Struct op
 *
 * @array: The function associated
 * @size: The function associated
 * @cmp: The function associated
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);

}
