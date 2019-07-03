/* printsa the alphabe */
#include "holberton.h"
/**
 * _strlen - Prints a string
 * @count: int
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
