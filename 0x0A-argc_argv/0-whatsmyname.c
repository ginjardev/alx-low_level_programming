#include <stdio.h>

/**
 * main - prints argv[0]
 * @argc: size of commandline array size
 * @argv: array of string pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
