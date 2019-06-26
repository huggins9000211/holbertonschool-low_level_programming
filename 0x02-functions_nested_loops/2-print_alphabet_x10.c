/* prints the alphabe */
#include <stdio.h>
/**
 * main - Prints a string
 *
 *Return: 0
 */
void print_alphabet_x10()
{
	char abc[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int x;

	for (x = 0; x < 5; x++)
	{
		for (i = 0; i < 26; i++)
		{
			putchar(abc[i]);
		}
		putchar('\n');
	}

	return;
}
/**
 * main - Prints a string
 *
 *Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
