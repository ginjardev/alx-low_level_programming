#include <stdlib.h>
#include <stdio.h>

/**
 * main - print sum of positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if(sizeof(argv[i]) == sizeof(int))
			{
				sum += argv[i];
			}
			else
			{
				print("%s\n", "Error");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
