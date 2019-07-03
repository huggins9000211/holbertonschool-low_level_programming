/* printsa the alphabe */
#include "holberton.h"
/**
 * _isdigit - Prints a string
 * @c: int
 *
 * Return: int
 */
int _isdigit(int c)
{
	int x;

	x = c - '0';
	if (x <= 9 && x >= 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
