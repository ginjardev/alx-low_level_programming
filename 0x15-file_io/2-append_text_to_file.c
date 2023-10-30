#include "main.h"

/**
 * _strlen - finds length of string
 * @s: string pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		++s;
		++length;
	}

	return (length);
}

/**
 * append_text_to_file - appends text to file
 * @filename: file pointer
 * @text_content: string pointer
 * Return: 1 on success or -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, bytes_w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_w = write(fd, text_content, _strlen(text_content));
		if (bytes_w == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
