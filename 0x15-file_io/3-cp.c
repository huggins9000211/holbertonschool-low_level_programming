#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

/**
 * main - check the code for Holberton School students.
 *@ac: test
 *@av: test
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd1;

	char *from = av[1];

	if (ac != 3)
	{
		write(2, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}

	fd1 = open(from, O_RDONLY);
	if (fd1 == -1)
	{
		write(2, "Error: Can't read from file NAME_OF_THE_FILE\n", 45);
		exit(98);
	}

	close(fd1);
	return (1);

}
