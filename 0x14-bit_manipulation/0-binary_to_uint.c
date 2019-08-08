#include "holberton.h"
/**
 * binary_to_uint - check the code for Holberton School students.
 *
 * @b: test
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	const char *start = b;
	unsigned int total = 0;
	if (!b)
	{
		return (0);
	}
	while (*start)
	{
	total *= 2;
		if (*start == '1')
		{
			total += 1;
		}
		else if ((*start != '1') && (*start != '0'))
		{
			return (0);
		}
		start++;
	}
	return (total);
}
