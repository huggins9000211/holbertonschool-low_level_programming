#include "holberton.h"
/**
 * _strlen - Prints a string
 * @s: char
 *
 * Return: int
 */
void _puts_recursion(char *s)
{
	char *i = s;

	if (*i != '\0')
	{
		_putchar(*i);
		i = i + 1;
		_puts_recursion(i);
	}
	else if (*i == '\0')
	{
		_putchar('\n');
	}



}
