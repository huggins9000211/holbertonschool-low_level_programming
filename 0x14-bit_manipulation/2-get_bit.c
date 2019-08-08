#include "holberton.h"

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n & ( 1 << index )) >> index);
}
