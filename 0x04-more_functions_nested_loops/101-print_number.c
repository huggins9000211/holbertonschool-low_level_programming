/* prints the alphabe */
#include "holberton.h"
/**
 * print_number - Prints a string
 * @n: int
 *
 * Return: 0
 */
void print_number(int n)
{
	int negated;

	if (n < 0)
	{
		negated = n * -1;
		if (negated > 999)
		{
			_putchar('-');
			_putchar(negated / 1000 + '0');
			_putchar((negated / 100) + '0');
			_putchar(negated / 10 + '0');
			_putchar(negated % 10 + '0');
		}
		else if (negated > 99)
		{

			_putchar('-');
			_putchar(negated / 100 + '0');
			_putchar(negated / 10 + '0');
			_putchar(negated % 10 + '0');
		}
		else if (negated > 9)
		{
			_putchar('-');
			_putchar(negated / 10 + '0');
			_putchar(negated % 10 + '0');
		}
		else
		{
			_putchar('-');
			_putchar(negated + '0');
		}
	}
	else if (n > 0)
	{
		if (n > 999)
		{
			_putchar(n / 1000 + '0');
			_putchar(n / 100 + '0');
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else if (n > 99)
		{
			_putchar(n / 100 + '0');
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else if (n > 9)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else
		{
			_putchar(n + '0');
		}
	}
	return ;
}
