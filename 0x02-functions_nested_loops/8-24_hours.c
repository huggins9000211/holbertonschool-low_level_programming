/* prints the alphabe */
#include "holberton.h"
/**
 * jack_bauer - Prints a string
 *
 * Return: int
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a < '3'; a++)
	{
		for (b = '0'; b < '4'; b++)
		{
			for (c = '0'; c < '6'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
	return ;
}
