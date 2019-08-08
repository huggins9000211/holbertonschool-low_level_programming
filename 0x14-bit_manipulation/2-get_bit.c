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
 * getlenth - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int getlenth(unsigned long int n)
{

	int i;

	unsigned int x = 0;
	int started = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 31; i >= 0; i--)
		{
			int k = n >> i;

			if (k & 1)
			{
				if (started)
					x++;
				else
				{
					started = 1;
				}
			}
			else
			{
				if (started)
				{
					x++;
				}
			}

		}
		return (x);
	}

}
/**
 * get_bit - writes the character c to stdout
 * @index: The character to print
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	unsigned int x = getlenth(n);
	int started = 0;
	if (n == 0)
	
	{
		if (index)
		{
			return (-1);
		}
		return (0);

	}
	else
	{
		for (i = 31; i >= 0; i--)
		{
			int k = n >> i;

			if (k & 1)
			{
				started = 1;
				if (x == index)
				{
					return (1);
				}
				x--;
			}
			else
			{
				if (started)
				{
					if (x == index)
					{
						return (0);
					}
					x--;
				}
			}
		}
		return (-1);
	}
}
