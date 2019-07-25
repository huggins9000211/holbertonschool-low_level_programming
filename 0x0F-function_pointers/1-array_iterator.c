#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Struct op
 *
 * @array: The function associated
 * @size: The function associated
 * @action: The function associated
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int len;

	len = size;
	if (array != NULL && action != NULL)
	{
		for (i = 0; i < len; i++)
		{
			action(array[i]);
		}
	}

}
