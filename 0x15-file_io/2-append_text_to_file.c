#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')

	{
		length++;
	}

	return (length);
}


int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int writeint;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		writeint = write(fd, text_content, _strlen(text_content));
		if (writeint == -1)
			close(fd);
			return (-1);
	}
	close(fd);
	return (1);
}
