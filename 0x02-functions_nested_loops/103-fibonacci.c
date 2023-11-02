#include <stdio.h>

void under_4m(void);

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	under_4m();
	return (0);
}

/**
 * under_4m - prints sum of even fibonacci numbers
 * Return: void
 */
void under_4m(void)
{
	long first = 0, second = 1, next = first + second;
	long sum;

	while (next <= 4000000)
	{
		if (next % 2 == 0)
			sum += next;
		first = second;
		second = next;
		next = first + second;
	}
	printf("%ld\n", sum);
}
