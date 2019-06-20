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
		for (c = '0'; c <= '9'; c++) {
			putchar(i);
			putchar(c);
			if (i == '9' && c == '9') {

			}
			else {
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
