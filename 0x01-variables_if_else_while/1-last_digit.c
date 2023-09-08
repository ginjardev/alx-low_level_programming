#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: zero is returned
*/
int main(void)
{
	int n;
	int rmdr;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rmdr = n % 10;

	if (rmdr == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, rmdr);
	}
	else if (rmdr > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, rmdr);
	}
	else if (rmdr < 6 && rmdr != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rmdr);
	}
	return (0);
}
