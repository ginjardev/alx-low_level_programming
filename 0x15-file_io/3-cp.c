#include "main.h"

/**
 * print_exit_code - prints exit code status
 * @code: exit code
 * @text: text to print
 * @filename: name of file
 * Return: void
 */
void print_exit_code(int code, const char *text, const char *filename)
{
	dprintf(STDERR_FILENO, text, filename);
	exit(code);
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument list
 * Return: 0
 */
int main(int argc, char **argv)
{
	int src, dst, bytes_r, bytes_w;
	char buffer[BUFFERSIZE];

	if (argc != 3)
		print_exit_code(97, "Usage: cp file_from file_to\n", argv[0]);

	src = open(argv[1], O_RDONLY);
	if (src == -1)
		print_exit_code(98, "Error: Can't read from file %s\n", argv[1]);

	dst = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dst == -1)
		print_exit_code(99, "Error: Can't write to %s\n", argv[2]);

	while ((bytes_r = read(src, buffer, BUFFERSIZE)) > 0)
	{
		bytes_w = write(dst, buffer, bytes_r);
		if (bytes_w == -1)
			print_exit_code(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (bytes_r == -1)
		print_exit_code(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	if (close(dst) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dst);
		exit(100);
	}
	return (0);
}
