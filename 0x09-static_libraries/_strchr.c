#include "holberton.h"
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
 * *_memset - Prints a string
 * @i: int
 *
 * Return: int
 */
char *_strchr(char *s, char c)
{
	int i;
	char *r;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			r = &s[i];
			return r;
		}
		i++;
		if (s[i] == c)
		{
			r  = &s[i];
			return r;
		}
	}
	return ('\0');
}
