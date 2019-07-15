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
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		i = 0;
		for (i = 0; haystack[i] == needle[i]; i++)
		{
			if (needle[i] == '\0')
			{
				return haystack;
			}
		}
		haystack++;
	}
	return ('\0');
}
