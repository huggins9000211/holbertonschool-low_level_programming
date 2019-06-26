/* prints the alphabe */
#include <stdio.h>
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
		putchar(abc[i]);
	}

	putchar('\n');
	return;
}
