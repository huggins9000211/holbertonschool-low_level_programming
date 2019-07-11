#include "holberton.h"

/**
 * _strlen - Prints a string
 * @s: char
 * @count: int
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
 * _strcpy - check the code for Holberton School students.
 * @dest: char
 * @src: char
 * @len: int
 * @count: int
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int count;
	int len;

	count = 0;
	len = _strlen(src) + 1;
	while (count < len)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
