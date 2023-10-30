#include "main.h"

/**
 * read_textfile - reads texts file and prints to stdout
 * @filename: file parameter
 * @letters: number of letters read
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, bytes_r, bytes_w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	bytes_r = read(fd, buffer, letters);
	bytes_w = write(STDOUT_FILENO, buffer, bytes_r);

	free(buffer);

	if (fd == -1 || bytes_r == -1 || bytes_r == -1)
		return (0);

	close(fd);
	return (bytes_w);
}
