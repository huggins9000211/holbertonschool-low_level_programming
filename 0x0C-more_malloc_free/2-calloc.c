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
	int *temp;
	unsigned int i;

	i = 0;
	result = malloc(nmemb * size);
	temp = malloc(nmemb * size);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		temp[i] = 0;
	}
	result = temp;
	return (result);
}
