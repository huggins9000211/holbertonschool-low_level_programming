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
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}
	result = (char*)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		result[i] = c;
	}
	printf("%c\n", *result);
	return (result);
 }
