#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <errno.h>
#include <ctype.h>
#include <stdlib.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}


int main(int argc, char *argv[])
{
	int count;
	int result;
	int num;
	char *p;
	long conv;

	errno = 0;
	count = 1;
	result = 0;
	if (argc == 0)
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
			num = conv;
			result = result + num;
			count++;
		}

	}
	printf("%d\n", result);
	return (0);

}
