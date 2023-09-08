#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns random number to n
 * Return: zero is returned
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%s", "is zero");
	}
	else if (n > 0)
	{
		printf("%s", "is positive");
	}
	else
	{
		printf("%s", "is negative");
	}
	return (0);
}
