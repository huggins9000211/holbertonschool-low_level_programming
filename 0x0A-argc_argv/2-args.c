#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Prints a string
 * @argc: char
 * @argv: char
 *
 * Return: int
 */
int main(int argc , char *argv[])
{
	int count;

	count = 1;
	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count ++;
	}
	return (0);
}
