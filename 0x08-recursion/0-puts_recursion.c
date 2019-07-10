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
 * _puts_recursion - check the code for Holberton School students.
 * @s: char
 *
 * Return: Always 0.
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
	else if(*i == '\0')
	{
		_putchar('\n');
	}



}
