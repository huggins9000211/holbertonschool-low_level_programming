#include "holberton.h"

int _strlen_recursion(char *s);
/**
 * _print_rev_recursion - check the code for Holberton School students.
 *
 * @s: char
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	char *i;
	int count;
	int len;

	i = s;
	len = _strlen_recursion(s);
	count = 0;
	if (*i != '\0')
	{
		count ++;
		i = i + 1;
		_print_rev_recursion(i);
	}
	_putchar(*i);
	if (len == count)
	{
		_putchar('\n');
	}



}
/**
 * _strlen_recursion - check the code for Holberton School students.
 *@s: char
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int count;
	char *i;

	i = s;
	count = 1;
	if (*i != '\0')
	{
		i = i + 1;
		count = count + _strlen_recursion(i);
		return (count);
	}
	return (0);
}
