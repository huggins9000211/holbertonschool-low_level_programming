#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int count;
	char *i;

	i = s;
	count = 1;



	if (*i != '\0')
	{
		i = i + 1;
		count = count + _strlen_recursion(i);
		return(count);
	}
	return (0);





}
