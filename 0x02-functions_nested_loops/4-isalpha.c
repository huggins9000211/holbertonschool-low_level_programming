/* prints the alphabe */
#include <stdio.h>
/**
 * _isalpha - Prints a string
 *
 *Return: int
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
