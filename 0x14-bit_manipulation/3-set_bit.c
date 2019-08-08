#include "holberton.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	*n = (1 << index) | *n;
	return (1);
}
