#include "holberton.h"
#include <unistd.h>

/**
 * _strcpy - check the code for Holberton School students.
 * @a: int
 * @n: int
 * @count: int
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int count;

	count = 0;
	while (count < n)
	{
		if (a[count] > 999)
		{
			_putchar(a[count] / 1000 + '0');
			_putchar(a[count] / 100 + '0');
			_putchar(a[count] / 10 + '0');
			_putchar(a[count] % 10 + '0');
		}
		else if (a[count] > 99)
		{
			_putchar(a[count] / 100 + '0');
			_putchar(a[count] / 10 + '0');
			_putchar(a[count] % 10 + '0');
		}
		else if (a[count] > 9)
		{
			_putchar(a[count] / 10 + '0');
			_putchar(a[count] % 10 + '0');
		}
		count++;
	}
}
