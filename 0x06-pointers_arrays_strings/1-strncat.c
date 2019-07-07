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
 * _strncat - Prints a string
 * @dest: int
 * @src: char
 * @n: int
 *
 * Return: int
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len;
	int org;

	len = _strlen(src);
	org = _strlen(dest);
	for (i = 0; i < n; i++)
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
