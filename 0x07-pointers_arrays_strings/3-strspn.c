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
	char *r;
	int x;
	int temp;
	int check;
	int extra;

	i = 0;
	x = 0;
	temp = 0;
	check = 0;
	while (s[i] != '\0')
	{
		if (i != extra
		while (accept[x] != '\0'
		{
			if (s[i] == accept[x]);
			{
				temp++;
				check++
				break
			}
			extra = 0;
			x++;
		}
		i++; 
	}
	return (check);
}
