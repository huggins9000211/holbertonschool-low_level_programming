/* printsa the alphabe */
#include "holberton.h"
/**
 * more_numbers - Prints a string
 *
 * Return: int
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		if (i < 10)
		{
			_putchar(i + '0');
		}
		else
		{
			_putchar((i / 10) + '0')
			_putchar((i % 10) + '0')
		}
	}
	_putchar('\n');
}
