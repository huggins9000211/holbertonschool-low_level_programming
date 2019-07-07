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
char *_strncpy(char *dest, char *src, int n)
{
	int count;
	int len;

	count = 0;
	len = _strlen(src) + 1;
	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
