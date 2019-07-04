#include "holberton.h"
/**
 * _strlen - Prints a string
 * @s: char
 *
 * Return: int
 */
void puts_half(char *str)
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
