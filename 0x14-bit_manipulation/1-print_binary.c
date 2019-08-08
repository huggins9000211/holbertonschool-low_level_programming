#include "holberton.h"

void print_binary(unsigned long int n)
{

	int i;

	int started = 0;
	if (n == 0)
	{
		_putchar('0');
	}
	for (i = 31; i >= 0; i--) {
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
