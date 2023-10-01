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
	int i, j, result;

	if (argc != 3)
		printf("%s\n", "Error");
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		result = i * j;
		printf("%d\n", result);
	}
	return (0);
}
