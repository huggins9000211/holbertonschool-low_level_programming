/* prints the alphabe */
#include "holberton.h"
/**
 * _ - Prints a string
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	i = i + '0';
	_putchar(i);
	return (i);
}
