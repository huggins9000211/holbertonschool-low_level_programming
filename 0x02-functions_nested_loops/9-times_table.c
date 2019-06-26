/* prints the alphabe */
#include "holberton.h"
/**
 * times_table - Prints a string
 *
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		for (b = 1; b <= 9; b++)
		{
			if ((a * (b + 1) / 10) >= 1)
			{
				if (b == 9)
				{
					if ((a * b / 10) >= 1)
					{
						c = a * b;
						_putchar(c / 10 + '0');
						_putchar(c % 10 + '0');
					}
					else
					{
						c = a * b;
						_putchar(c + '0');
					}

				}
				else
				{
					if ((a * b / 10) >= 1)
					{
						c = a * b;
						_putchar(c / 10 + '0');
						_putchar(c % 10 + '0');
						_putchar(',');
						_putchar(' ');
					}
					else
					{
						c = a * b;
						_putchar(c + '0');
						_putchar(',');
						_putchar(' ');
					}
				}

			}
			else
			{

				if (b == 9)
				{
					if ((a * b / 10) >= 1)
					{
						c = a * b;
						_putchar(c / 10 + '0');
						_putchar(c % 10 + '0');
					}
					else
					{
						c = a * b;
						_putchar(c + '0');
					}
				}
				else
				{
					if ((a * b / 10) >= 1)
					{
						c = a * b;
						_putchar(c / 10 + '0');
						_putchar(c % 10 + '0');
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					else
					{
						c = a * b;
						_putchar(c + '0');
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
			}
		}
		_putchar('\n');
	}
	return ;
}
