#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int temp;
	va_list args;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		if (i != (n - 1))
		{
			temp = va_arg(args, int);
			printf("%d%s", temp, separator);
			i++;
		}
		else if ((separator == NULL) && (i != (n - 1)))
		{
			temp = va_arg(args, int);
			printf("%d", temp);
			i++;
		}
		else
		{
			temp = va_arg(args, int);
			printf("%d\n", temp);
			i++;
		}
	}
}
