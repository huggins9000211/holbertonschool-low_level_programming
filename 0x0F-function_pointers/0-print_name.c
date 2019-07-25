#include "function_pointers.h"
/**
 * print_name - Struct op
 *
 * @name: The function associated
 * @f: The function associated
 * @cmp: The function associated
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
