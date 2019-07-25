#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - Struct op
 *
 * @name: The function associated
 * @f: The function associated
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
