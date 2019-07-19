#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_range - Prints a string
* @min: char
* @max: char
*
* Return: int
*/
int *array_range(int min, int max)
{
	int *result;
	int i;
	int total;
	int count;

	total = 0;
	count = 0;
	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		total++;
	}
	result = malloc(total * sizeof(int));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		result[count] = i;
		count++;
	}
	return (result);
}
