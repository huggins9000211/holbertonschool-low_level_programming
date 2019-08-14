#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>
/**
 * _strlen - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')

	{
		length++;
	}

	return (length);
}

/**
 * append_text_to_file - writes the character c to stdout
 * @filename: The character to print
 * @text_content: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
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
