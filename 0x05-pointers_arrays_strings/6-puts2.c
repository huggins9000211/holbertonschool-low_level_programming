#include "holberton.h"
/**
 * _strlen - Prints a string
 * @s: char
 * @out: char
 *
 * Return: int
 */
void _puts(char *s)
{
	char out;

	while (s[0] != '\0' && s[1] != '\0')
	{
		out = *s;
		_putchar(out);
		s = s + 2;
	}
	_putchar('\n');
}
