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
void print_rev(char *s)
{
	int len;
	int count;
	int max;
	char holder;
	int mid;

	len = _strlen(s);
	count = 0;

	if (len % 2 == 0)
	{
		while (count < (len / 2))
		{
			max = (len - count) - 1;
			holder = s[count];
			s[count] = s[max];
			s[max] = holder;
			count++;
		}
	}
	else
	{
		mid = len / 2;
		while (count < mid)
		{
			max = (len - count) - 1;
			holder = s[count];
			s[count] = s[max];
			s[max] = holder;
			count++;
		}
	}
	_putchar('\n');
}
