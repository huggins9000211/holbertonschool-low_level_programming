/* prints the alphabe */
#include "holberton.h"
/**
 * main - Prints a string
 *
 *Return: 0
 */
int _abs(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		n = n*-1;
		return (n);
	}
	else
	{
		return (n);
	}
}
