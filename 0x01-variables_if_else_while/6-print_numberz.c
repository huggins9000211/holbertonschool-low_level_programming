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
	char abc[10] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(abc[i]);
	}

	putchar('\n');
	return (0);
}
