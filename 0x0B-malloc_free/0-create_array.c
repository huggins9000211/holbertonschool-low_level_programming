#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints a string
 * @argc: char
 * @argv: char
 *
 * Return: int
 */
 char *create_array(unsigned int size, char c)
 {
	char *result;

	if (size == 0)
	{
		return ('\0');
	}
	result = (char*)malloc(size * Sizeof(int));
	*result = c;
	return (result);
 }
