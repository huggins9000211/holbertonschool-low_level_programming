#include "holberton.h"
/**
 * *_memset - Prints a string
 * @i: int
 *
 * Return: int
 */
char  *_strpbrk(char *s, char *accept)
{
	int i;
	int x;
	char *r;

	while (s[i] != '\0')
	{
		x = 0;
		while (accept[x] != '\0')
		{
			if (s[i] == accept[x])
			{
				r = &s[i];
				return (r);
			}
			x++;
		}
		i++;
	}
	return ('\0');
}
