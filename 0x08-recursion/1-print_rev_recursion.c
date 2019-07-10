#include "holberton.h"

/**
 * _print_rev_recursion - check the code for Holberton School students.
 *
 * @s: char
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	char *i;

	i = s;
	if (*i != '\0')
	{
		i = i + 1;
		_print_rev_recursion(i);
	}
	else if (*i == '\0')
	{
		_putchar('\n');
	}
	_putchar(*i);


}
