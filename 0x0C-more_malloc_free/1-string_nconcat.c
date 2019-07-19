#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_nconcat - Prints a string
* @s1: char
* @s2: char
* @n: char
*
* Return: int
*/
char *str_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1;
	int len2;
	int count;
	char *result;
	int i;

	count = 0;
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	result = (char *)malloc(((len1 + len2) * sizeof(char)) + 1);

	if (s1 == '\0' || s1 == NULL)
	{
		result = _strdup(s2);
		return (result);
	}
	else if (s2 == '\0' || s2 == NULL)
	{
		result = _strdup(s1);
		return (result);
	}
	else if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		result[count] = s1[i];
		count++;
	}
	for (i = 0; i < len2 && i < n; i++)
	{
		result[count] = s2[i];
		count++;
	}
	result[count] = '\0';
	return (result);
}
