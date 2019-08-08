#include "holberton.h"
/**
 * clear_bit - writes the character c to stdout
 * @index: The character to print
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1UL << index);
	return (1);
}
