#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Struct op
 *
 * @argc: The function associated
 * @argv: The function associated
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	char *sign;
	int (*f)(int a, int b);


	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	sign = (argv[2]);
	f = get_op_func(sign);
	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((*sign == '/' || *sign == '%') && (num2 == 0))
	{
		printf("Error\n");
		return (100);
	}
	result = (f(num1, num2));
	printf("%d\n", result);
	return (0);
}
