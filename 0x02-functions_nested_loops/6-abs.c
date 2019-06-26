/* prints the alphabe */
#include "holberton.h"
/**
 * _abs - Prints a string
 *
 * Return: int
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
