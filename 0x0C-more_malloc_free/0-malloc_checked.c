#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - Prints a string
* @b: char
*
* Return: int
*/
void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b);
	if (result == NULL)
	{
		/*return (98);*/
	}
	return (result);
}
