#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers with separator
 * @separator: separator for numbers
 * @n: number of numbers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(args, int);
		printf("%d", j);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
