#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	/*char sign;*/
	int num1;
	int num2;
	int result;
	char *sign;
	int (*f)(int a, int b);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	sign = (argv[2]);
	/*printf("%d\n", num1);
	printf("%d\n", argc);*/
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	/*else if (sign == ('+' || '-' || '*' || '/' || '%'))
	{

	}*/
	f = get_op_func(sign);
	result = (f(num1, num2));
	printf("%d\n", result);
	return 0;
}
