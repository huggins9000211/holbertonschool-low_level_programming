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
* main - Prints a string
* @argc: char
* @argv: char
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
	result = (char*)malloc(len * sizeof(char));

	for (i = 0; i < len; i++)
	{
		result[i] = str[i];
	}
	result[i] = '\0';
	return (result);
}
