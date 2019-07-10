#include "holberton.h"

int result = 0;
int i = 1;
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1 || n == -1)
	{
		return n;
	}
	else if ((i * i) == n)
	{
		result = 1;
		return (i);
	}
	else if ((i * i) > n)
	{
		return (-1);
	}


	if (result == 1)
	{
		return (i);
	}

	else
	{
		i ++;

		_sqrt_recursion(n);
	}
	return i;

}
