/* prints the alphabe */
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints a string
 *
 *Return: 0
 */
int main(void)
{
	char abc[26] = "abcdefghijklmnopqrstuvwxyz";
	char caps[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(abc[i]);
	}

	for (i = 0; i < 26; i++)
	{
		putchar(caps[i]);
	}

	putchar('\n');
	return (0);
}
