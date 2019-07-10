#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int is_palindrome(char *s)
{


}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void _rev_recursion(char *s)
{
	char *i = s;
	char *x = s;

	if (*i != '\0')
	{
		*(x + i) =
		i = i + 1;
		_print_rev_recursion(i);
	}
	else if(*i == '\0')
	{
		_putchar('\n');
	}
	_putchar(*i);
}
/**
 * main - check the code for Holberton School students.
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
		return(count);
	}
	return (0);
}
