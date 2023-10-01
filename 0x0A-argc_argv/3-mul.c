#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: array size
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = atoi(argv[1]);
	int j = atoi(argv[2]);

	if (argc > 2)
		printf("%d\n", i * j);
	else
		printf("%s\n", "Error");
	return (0);
}
