#include "holberton.h"

/**
 * _strlen - Prints a string
 * @s: char
 * @i: char
 * @count: int
 *
 * Return: int
 */
 int _strlen(char *s)
 {
 	int count;

 	count = 0;
 	while (s[0] != '\0')
 	{
 		s++;
 		count++;
 	}
 	return (count);

 }
 /**
  * _putchar - Prints a string
  * @s: char
  *
  * Return: int
  */
 int _putchar(char c)
 {
 	return (write(1, &c, 1));
 }

/**
 * _strcpy - check the code for Holberton School students.
 * @dest: char
 * @src: char
 * @len: int
 * @count: int
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int count;
	int len;

	count = 0;
	len = _strlen(src);
	while (count < n)
	{
		if (count < len)
		{

			_putchar(a[count]);
			count++;
		}
	}
}
