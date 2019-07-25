#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - Struct op
 *
 * @s: The function associated
 * Return: Nothing.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	if (s[1] != '\0')
	{
		return (NULL);
	}
	while (i < 5)
	{
		if (ops[i].op[0] == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
