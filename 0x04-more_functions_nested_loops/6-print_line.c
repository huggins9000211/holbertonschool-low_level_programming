/* printsa the alphabe */
#include "holberton.h"
/**
 * print_line - Prints a string
 * @n: int
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
