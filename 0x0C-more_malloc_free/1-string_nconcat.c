#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - Prints a string
 * @s: char
 *
 * Return: int
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[0] != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
/**
* _strdup - Prints a string
* @str: char
*
* Return: int
*/
char *_strdup(char *str)
{
	int len;
	char *result;
	int i;

	len = _strlen(str);
	if (len == 0)
	{
		return ('\0');
	}
	if (((char *)malloc(len * sizeof(char))) == NULL)
	{
		return (NULL);
	}
	result = (char *)malloc(len * sizeof(char));

	for (i = 0; i < len; i++)
	{
		result[i] = str[i];
	}
	result[i] = '\0';
	return (result);
}
/**
* string_nconcat - Prints a string
* @s1: char
* @s2: char
* @n: char
*
* Return: int
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	int count;
	char *result;
	unsigned int i;

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
