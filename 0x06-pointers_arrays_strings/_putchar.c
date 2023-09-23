#include <unistd.h>
#include <main.h>
/**
 * _putchar - write char to stdout
 * @c: char parameter
 * Return: writes to stdout
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
