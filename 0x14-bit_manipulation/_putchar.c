#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
* _strlen -  a function that returns the length of a string
* @s: pointer to the length
* Return: 0
*/
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')

	{
		length++;
	}

	return (length);
}
/**
* putstring -  a function that returns the length of a string
* @in: pointer to the length
* Return: 0
*/
int putstring(char *in)
{
	int i;
	int result;
	i = _strlen(in);

	result = write(1, in, i);
	return result;
}
