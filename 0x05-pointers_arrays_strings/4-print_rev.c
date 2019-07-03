#include "holberton.h"
/**
 * _strlen - Prints a string
 * @s: char
 * @i: char
 * @count: int
 *
 * Return: int
 */
void print_rev(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	count--;
	while (count >= 0)
	{
		count--;
		_putchar(s[count]);
	}
	_putchar('\n');

}
