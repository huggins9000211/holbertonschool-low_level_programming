#include "holberton.h"
/**
 * _isupper - Prints a string
 * @c: int
 *
 * Return: void
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
