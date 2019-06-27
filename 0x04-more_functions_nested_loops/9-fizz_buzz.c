/* prints the alphabe */
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints a string
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for  (i = 1; i <= 100; i++)
	{
		if i != 100
		{
			if (((i % 3) == 0) && ((i % 5) == 0))
			{
				printf("FizzBuzz");
				printf(" ");
			}
			else if ((i % 3) == 0)
			{
				printf("Fizz");
				printf(" ");
			}
			else if ((i % 5) == 0)
			{
				printf("Buzz");
				printf(" ");
			}
			else
			{
				printf("%d",i);
				printf(" ");
			}
		}
		else
		{
			if (((i % 3) == 0) && ((i % 5) == 0))
			{
				printf("FizzBuzz");
			}
			else if ((i % 3) == 0)
			{
				printf("Fizz");
			}
			else if ((i % 5) == 0)
			{
				printf("Buzz");
			}
			else
			{
				printf("%d",i);
			}
		}
	}
	putchar('\n');
	return (0);
}
