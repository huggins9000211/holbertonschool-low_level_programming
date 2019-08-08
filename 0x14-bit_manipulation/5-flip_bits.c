#include "holberton.h"
/**
 * flip_bits - writes the character c to stdout
 * @m: The character to print
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int i = 0;

	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
		{
			count++;
		}
	}
	return (count);
}
