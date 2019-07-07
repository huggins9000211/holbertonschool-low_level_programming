#include "holberton.h"
#include <unistd.h>
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
  * _strlen - Prints a string
  * @s: char
  * @i: char
  * @count: int
  *
  * Return: int
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len;
	int org;

	len = _strlen(src);
	org = _strlen(dest);
	for (i = 0; i < n; i++)
	{
		if (i == len)
		{
			dest[i + org] = '\0';

		}
		else
		{
			dest[i + org] = src[i];
		}
	}
	return (dest);
}
