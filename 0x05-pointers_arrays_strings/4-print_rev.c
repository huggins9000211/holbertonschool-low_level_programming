#include "holberton.h"
/**
 * _strlen - Prints a string
 * @s: char
 *
 * Return: int
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[0] != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
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
	int count;
	int len;
	char temp;

	count = 0;
	len = _strlen(s)
	while (s[count] < len)
	{
		temp = s[count];
		s[len - count];
		
	}
	_putchar('\n');

}
