#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - Prints a string
* @nmemb: char
* @size: char
*
* Return: int
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;

	result = calloc(nmemb, size);
	if (result == NULL)
	{
		return (NULL);
	}
	return (result);
}
