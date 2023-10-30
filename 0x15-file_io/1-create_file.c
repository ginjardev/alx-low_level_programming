#include "main.h"

/**
 * _strlen - finds length of string
 * @s: string pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		++count;
	}

	return (count);
}

/**
 * create_file - creates file and writes string
 * @filename: file pointer or parameter
 * @text_content: string parameter
 * Return: 1 on success or -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, _strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}


