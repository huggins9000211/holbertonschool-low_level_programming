/* printsa the alphabe */
#include "holberton.h"
/**
 * print_triangle - Prints a string
 * @size: int
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int x;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (x = size; x > 0; x--)
			{
				if (x <= i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}

			}
			_putchar('\n');
		}
	}
}
