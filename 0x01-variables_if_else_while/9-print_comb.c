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

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
		{

		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
