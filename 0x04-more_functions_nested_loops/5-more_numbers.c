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

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
}
