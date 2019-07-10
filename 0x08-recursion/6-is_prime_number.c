#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int globalChk;


int is_prime_number(int n)
{
	globalChk = n / 2;
	if(globalChk == 1)
	{
		return 1;
	}
	else
	{
		if(n % globalChk == 0)
		{
			return 0;
		}
		else
		{
			globalChk = globalChk - 1;
			is_prime_number(n);
		}
	}
	return (0);
}
