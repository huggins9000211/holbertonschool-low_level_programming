#include <stdio.h>
#include <stdlib.h>
/**
* argstostr - Prints a string
* @ac: char
* @av: char
*
* Return: int
*/
char *argstostr(int ac, char **av)
{
	int i;
	int x;
	int count;
	char *result;

	count = 0;
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x] != '\0'; x++)
		{
			count++;
		}
		count++;
	}
	result = (char *)malloc((count * sizeof(char)) + 1);
	count = 0;
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x] != '\0'; x++)
		{
			result[count] = av[i][x];
			count++;
		}
		result[count] = '\n';
		count++;
	}
	if (ac == 0 || av == '\0')
	{
		return ('\0');
	}
	return (result);

}
