#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: first parameter
 * @n: second parameter
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list p;

	va_start(p, n);
	for (j = 0 ; j < n ; j++)
	{
		printf("%d", va_arg(p, const unsigned int));

		if ((j != (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
