/* printsa the alphabe */
#include "holberton.h"
/**
 * print_square - Prints a string
 * @size: int
 *
 * Return: void
 */
void print_square(int size)
{
	int i;
	int x;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
