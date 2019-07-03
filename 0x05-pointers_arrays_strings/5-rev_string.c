#include "holberton.h"
/**
 * _strlen - Prints a string
 * @s: char
 * @i: char
 * @count: int
 *
 * Return: int
 */
void print_rev(char *s)
{
	int len;
	int count;
	int max;
	char holder;
	int mid;

	len = _strlen(s);
	count = 0;

	if (len % 2 == 0;)
	{
		while (count < (len / 2))
		{
			max = (len - count) - 1;
			holder = s[count];
			s[count] = s[max];
			s[max] = holder;
			count++;
		}
	}
	else
	{
		mid = len / 2;
		while (count < mid)
		{
			max = (len - count) - 1;
			holder = s[count];
			s[count] = s[max];
			s[max] = holder;
			count++;
		}
	}
	_putchar('\n');

}
