#include <stdio.h>

/**
 * main - prints number of CL arguments
 * @argc: number of CL arguments
 * @argv: CL array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", (argc - 1));
	return (0);
}
