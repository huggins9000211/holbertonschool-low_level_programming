/* prints the alphabe */
#include <stdio.h>
/**
 * main - Prints a string
 *
 *Return: 0
 */
int print_sign(int n)
{
	if (n == 0)
	{
		putchar("+");
		return (0);
	}
	else if (n < 0)
	{
		putchar("+");
		return (-1);
	}
	else
	{
		putchar("+");
		return (1);
	}
}
