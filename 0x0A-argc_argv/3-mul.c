#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <errno.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Prints a string
 * @argc: char
 * @argv: char
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int count;
	int result;
	char *p;
	long conv;
	long num1;
	long num2;

	errno = 0;
	count = 1;
	result = 0;
	if (argc != 3)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		conv = strtol(argv[count], &p, 10);

		if (errno != 0 || *p != '\0' || conv > INT_MAX)
		{

			printf("Error\n");
			return (1);
		}
		else
		{
			if (count == 1)
			{
				num1 = conv;
			}
			else
			{
				num2 = conv;
			}
			count++;
		}

	}
	result = num1 * num2;
	printf("%d\n", result);
	return (0);

}
