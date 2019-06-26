/* prints the alphabe */
#include "holberton.h"
/**
 * print_last_digit - Prints a string
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int i;

	if (n == 0)
	{
		_putchar('0');
		return ('0');
	}
	else if (n > 0)
	{
		n = n % 10;
		i = n;
		i = i + '0';
		_putchar(i);
		return (n);
	}
	else if (n < 0)
	{
		i = n * -1;
		n = n % 10;
		i = i + '0';
		_putchar(i);
		return (n);

	}
	else
	{
		return (n);
	}
}
