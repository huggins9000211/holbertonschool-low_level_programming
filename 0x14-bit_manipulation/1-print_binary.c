#include "holberton.h"
/**
 * print_binary - check the code for Holberton School students.
 *
 * @n: test
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{

	int i;

	int started = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		for (i = 63; i >= 0; i--)
		{
			int k = n >> i;

			if (k & 1)
			{
				started = 1;
				_putchar('1');
			}
			else
			{
				if (started)
				{
					_putchar('0');
				}
			}

		}
	}

}
