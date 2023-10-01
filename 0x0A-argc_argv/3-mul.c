#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: array size
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if(argc > 1)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("%s\n", "Error");
	}
	return (0);
}
