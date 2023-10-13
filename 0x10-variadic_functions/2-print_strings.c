#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: sep. parameter
 * @n: number of arguments parameter
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
	}

	va_end(args);
	printf("\n");
i}
