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
	int i;
	int c;

	for (i = '0'; i <= '9'; i++)
	{
		for (c = i + 1; c <= '9'; c++)
		{
			if (c > '1')
			{
				putchar(',');
				putchar(' ');
			}
			putchar(i);
			putchar(c);
		}
	}

	putchar('\n');
	return (0);
}
