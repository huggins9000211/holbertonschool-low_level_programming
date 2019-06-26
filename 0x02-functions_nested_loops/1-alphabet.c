/* prints the alphabe */
#include <stdio.h>
/**
 * main - Prints a string
 *
 *Return: 0
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
