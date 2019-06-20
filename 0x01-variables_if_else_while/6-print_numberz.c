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
	}

	putchar('\n');
	return (0);
}
