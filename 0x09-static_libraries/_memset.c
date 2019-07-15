#include "holberton.h"
/**
 * *_memset - Prints a string
 * @i: int
 *
 * Return: int
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = n;
	while (s[i] != '\0' && i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
