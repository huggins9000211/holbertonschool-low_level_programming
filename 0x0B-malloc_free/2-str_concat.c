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
	result = (char *)malloc(len * sizeof(char));
	if (result == '\0')
	{
		return ('\0');
	}

	for (i = 0; i < len; i++)
	{
		result[i] = str[i];
	}
	result[i] = '\0';
	return (result);
}
/**
* str_concat - Prints a string
* @s1: char
* @s2: char
*
* Return: int
*/
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int count;
	char *result;
	int i;

	count = 0;
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	result = (char *)malloc((len1 + len2) * sizeof(char));

	if (s1 == '\0')
	{
		result = _strdup(s2);
		return (result);
	}
	else if (s2 == '\0')
	{
		result = _strdup(s1);
		return (result);
	}

	for (i = 0; i < len1; i++)
	{
		result[count] = s1[i];
		count++;
	}
	for (i = 0; i < len2; i++)
	{
		result[count] = s2[i];
		count++;
	}
	result[count] = '\0';
	return (result);
}
