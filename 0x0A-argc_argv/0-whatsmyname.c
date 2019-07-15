#include <unistd.h>
#include "holberton.h"
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void _puts(char *s)
{
	char out;

	while (s[0] != '\0')
	{
		out = *s;
		_putchar(out);
		s++;
	}
	_putchar('\n');
}
/**
 * main - Prints a string
 * @argc: char
 * @argv: char
 *
 * Return: int
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	_puts(argv[0]);
	return 1;
}
