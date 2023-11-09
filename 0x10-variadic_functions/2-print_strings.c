#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line
 * @separator: first parameter
 * @n: second parameter
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *s;

	va_list p_s;

	va_start(p_s, n);

	for (j = 0 ; j < n ; j++)
	{
		s = va_arg(p_s, char*);

		if (s == NULL)
		{
			printf("(nil)");

		}
		else
		{
			printf("%s", s);
		}
		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
