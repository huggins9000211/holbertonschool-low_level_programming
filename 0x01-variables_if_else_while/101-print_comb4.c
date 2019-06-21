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
	int a;

	for (i = '0'; i <= '9'; i++)
	{
		for (c = i + 1; c <= '9'; c++)
		{
			for (a = c + 1; a <= '9'; a++)
			{
				if (a != '2')
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i);
				putchar(c);
				putchar(a);
			}
		}
	}

	putchar('\n');
	return (0);
}
