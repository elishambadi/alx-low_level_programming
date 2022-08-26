#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *read_textfile - Reads a textfile
 *@filename: pointer to file
 *@letters: no. of chars to print
 *Return: no of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_count, write_count;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	read_count = read(fd, buf, letters);
	if (read_count == -1)
	{
		return (0);
	}

	write_count = write(STDOUT_FILENO, buf, read_count);
	if (write_count == -1 || read_count != write_count)
		return (0);

	free(buf);
	close(fd);

	return (write_count);
}
