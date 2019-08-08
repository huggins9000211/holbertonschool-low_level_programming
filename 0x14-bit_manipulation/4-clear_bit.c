#include "holberton.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = (0 << index) | *n;
	return (1);
}
