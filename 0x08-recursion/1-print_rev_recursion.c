#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	char *i = s;

	if (*i != '\0')
	{
		i = i + 1;
		_print_rev_recursion(i);
	}
	else if(*i == '\0')
	{
		_putchar('\n');
	}
	_putchar(*i);
}
