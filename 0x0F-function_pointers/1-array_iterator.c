#include <stdio.h>
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int len;

	len = size;
	for (i = 0; i < len; i++)
	{
		action(array[i]);
	}
}
