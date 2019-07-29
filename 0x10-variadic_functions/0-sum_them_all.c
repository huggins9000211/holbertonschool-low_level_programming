#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Prints a string
 *
 * @n: int
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result;
	int temp;
	va_list args;

	va_start(args, n);
	i = 0;
	result = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		temp = va_arg(args, int);
		result = result + temp;
		i++;
	}
	return (result);
}
