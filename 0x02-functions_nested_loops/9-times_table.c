/* prints the alphabe */
#include "holberton.h"
/**
 * jack_bauer - Prints a string
 *
 * Return: int
 */
void times_table(void)
{
	int a;
	int b;
	int c;
	char d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++) {
			c = a * b;
			d = c;
			_putchar(d);
			_putchar(',');
			_putchar(' ');

		}
		_putchar('\n');
	}
	return ;
}
