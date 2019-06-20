/* prints a string */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints a string
 *
 *Return: 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than %d\n", n, l, 5);
	}
	else if (n < 6)
	{
		printf("Last digit of %d is %d and is less than %d and not %d\n", n, l, 6);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is %d\n", n, l, 0);
	}

	return (0);
}
