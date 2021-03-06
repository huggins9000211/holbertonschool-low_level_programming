
#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>
/**
 * read_textfile - writes the character c to stdout
 * @filename: The character to print
 * @letters: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t reed;
	char *string;
	int writeint;

	string = malloc(letters + 1);


	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	reed = read(fd, string, letters);
	close(fd);
	string[letters + 1] = '\0';
	writeint = write(1, filename, reed);
	if (writeint == -1)
		return (0);
	return (reed);

}
