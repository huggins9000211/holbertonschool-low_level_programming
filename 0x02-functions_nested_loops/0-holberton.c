/* prints the alphabe */
#include "holberton.h"
/**
 * main - Prints a string
 *
 *Return: 0
 */
int main(void)
{
	char abc[9] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(abc[i]);
	}

	_putchar('\n');
	return (0);
}
