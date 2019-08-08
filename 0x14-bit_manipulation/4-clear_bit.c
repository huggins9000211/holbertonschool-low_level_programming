#include "holberton.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1UL << index);
	return (1);
}
