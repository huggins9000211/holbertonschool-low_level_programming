
#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t reed;
	char *string;

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
	write(1, filename, reed);
	return (reed);

}
