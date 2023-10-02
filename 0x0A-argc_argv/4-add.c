#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - print sum of positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if(!isdigit(argv[i][j]))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}

		sum += atoi(argv[i]);

	}

	printf("%d\n", sum);

	return (0);
}
