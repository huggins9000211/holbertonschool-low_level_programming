#include "holberton.h"
/**
 * _strcmp - Prints a string
 * @s1: char
 * @s2: char
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int count;
	int out;

	count = 0;
	out = 0;
	while (s1[count] != '\0' || s2[count] != '\0')
	{
		if (s1[count] != s2[count])
		{
			out = s1[count] - s2[count];
			break;
		}
		count++;
	}
	return (out);
}
