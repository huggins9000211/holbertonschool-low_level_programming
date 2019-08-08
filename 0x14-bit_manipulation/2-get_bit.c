#include "holberton.h"
/**
 * get_bit - check the code for Holberton School students.
 *
 * @index: test
 * @n: test
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n & (1 << index)) >> index);
}
