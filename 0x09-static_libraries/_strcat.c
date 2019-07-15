#include "holberton.h"
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
 * _strcat - Prints a string
 * @dest: char
 * @src: char
 *
 * Return: int
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len;
	int org;

	len = _strlen(src);
	org = _strlen(dest);
	for (i = 0; i <= len; i++)
	{
		if (i == len)
		{
			dest[i + org] = '\0';
		}
		else
		{
			dest[i + org] = src[i];
		}
	}
	return (dest);
}
