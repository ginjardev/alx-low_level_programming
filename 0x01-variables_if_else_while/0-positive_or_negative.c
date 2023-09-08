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
		printf("%d %s", n, " is zero");
	}
	else if (n > 0)
	{
		printf("%d %s", n, " is positive");
	}
	else
	{
		printf("%d %s", n, " is negative");
	}
	return (0);
}
