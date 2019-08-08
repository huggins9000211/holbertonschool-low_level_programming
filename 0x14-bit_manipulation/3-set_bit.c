#include "holberton.h"
/**
 * set_bit - writes the character c to stdout
 * @index: The character to print
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
		return (-1);
	*n = (1 << index) | *n;
	return (1);
}
