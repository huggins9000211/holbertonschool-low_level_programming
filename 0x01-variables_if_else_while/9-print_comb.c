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
	char abc[28] = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9";
	int i;

	for (i = 0; i < 28; i++)
	{
		putchar(abc[i]);
	}

	putchar('\n');
	return (0);
}
