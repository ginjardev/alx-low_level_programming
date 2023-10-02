#include <stdio.h>
#include <stdlib.h>

/**
 * checknumber - checks if string is numeral
 * @s: string parameter
 * Return: 0 or 1
 */

int checknumber(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
	}

	return (1);
}


/**
 * main - calculate min. number of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int coins, change;
	char *input = argv[1];

	coins = change = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	change = atoi(input);

	if (change >= 0 && checknumber(input) == 0)
	{
		printf("%s\n", "Error");
		return (1);
	}

	if (change < 0 && checknumber(&input[1]) == 0)
	{
		printf("%s\n", "Error");
		return (1);
	}

	if (change < 0)
	{
		change = 0;
	}

	coins = change / 25;
	change = change % 25;
	coins = coins + change / 10;
	change = change % 10;
	coins = coins + change / 5;
	change = change % 5;
	coins = coins + change / 2;
	change = change % 2;
	coins += change;

	printf("%d\n", coins);

	return (0);
}
