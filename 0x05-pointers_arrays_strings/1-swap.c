/* printsa the alphabe */
#include "holberton.h"
/**
 * swap_int - Prints a string
 * @a: int
 * @b: int
 *
 * Return: int
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
