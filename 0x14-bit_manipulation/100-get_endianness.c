#include "holberton.h"
/**
 * get_endianness - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int get_endianness(void)
{
	unsigned int i = 1;

	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
