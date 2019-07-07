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
 * _strncpy - Prints a string
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: int
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;
	int len;

	count = 0;
	len = _strlen(src) + 1;
	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
