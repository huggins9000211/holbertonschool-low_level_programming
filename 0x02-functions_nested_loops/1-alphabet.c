/* prints the alphabe */
#include "holberton.h"
/**
 * print_alphabet - Prints a string
 *
 *Return: void
 */
void print_alphabet(void)
{
	char abc[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(abc[i]);
	}

	_putchar('\n');
	return ;
}
