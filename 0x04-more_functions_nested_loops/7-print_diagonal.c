/* printsa the alphabe */
#include "holberton.h"
/**
 * print_diagonal - Prints a string
 * @n: int
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int x;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (x = 0; x < i; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
