#include "holberton.h"
/**
 * *_memset - Prints a string
 * @i: int
 *
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int x;
	int temp;

	i = 0;
	x = 0;
	temp = 0;
	while (s[i] != '\0')
	{
		if (i == temp)
		{
			x = 0;
			while (accept[x] != '\0')
			{
				if (s[i] == accept[x])
				{
					temp++;
				}
				x++;
			}
		}
		i++;
	}
	return (temp);
}
