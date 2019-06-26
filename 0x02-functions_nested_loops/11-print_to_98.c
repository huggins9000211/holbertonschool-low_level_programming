/* prints the alphabe */
#include "holberton.h"
/**
 * add - Prints a string
 *
 * Return: int
 */
void print_to_98(int n)
{
	int i;
	int negated;
	int temp;
	if (n < 99)
	{
		for (i = n; i < 99; i++)
		{
			if (i == 98)
			{
				_putchar(9 + '0');
				_putchar(8 + '0');
				_putchar('\n');
			}
			else if (i < 0)
			{
				negated = i * -1;

				if ((negated / 10) >= 1)
				{
					if ((negated / 100) >= 1)
					{
						_putchar('-');
						_putchar((negated / 100) + '0');
						temp = negated / 10;
						_putchar((temp / 10) + '0');
						_putchar((negated % 10) + '0');
						_putchar(',');
						_putchar(' ');
					}
					else
					{
						_putchar('-');
						_putchar((negated / 10) + '0');
						_putchar((negated % 10) + '0');
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					_putchar('-');
					_putchar(negated + '0');
					_putchar(',');
					_putchar(' ');
				}

			}
			else
			{
				if ((i / 10) >= 1)
				{
					_putchar((i / 10) + '0');
					_putchar((i % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(i + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			if (i == 98)
			{
				_putchar(9 + '0');
				_putchar(8 + '0');
				_putchar('\n');
			}
			else
			{
				if ((i / 10) >= 1)
				{
					if ((i / 100) >= 1)
					{
						_putchar((i / 100) + '0');
						temp = i / 10;
						_putchar((temp / 10) + '0');
						_putchar((i % 10) + '0');
						_putchar(',');
						_putchar(' ');
					}
					else
					{
						_putchar((i / 10) + '0');
						_putchar((i % 10) + '0');
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					_putchar(i + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
}
