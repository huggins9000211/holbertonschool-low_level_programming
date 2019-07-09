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
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
