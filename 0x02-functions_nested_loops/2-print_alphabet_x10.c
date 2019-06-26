/* prints the alphabe */
#include "holberton.h"
/**
 * print_alphabet_x10 - Prints a string
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	char abc[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(abc[i]);
		}
		_putchar('\n');
	}

	return ;
}
