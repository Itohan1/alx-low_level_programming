#include "variadic_functions.h"

/**
 * print_all -  prints anything
 * @format: parameter
 *
 */

void print_all(const char * const format, ...)
{
	int j, k;
	char *s;

	va_list(len);

	va_start(len, format);
	j = 0;
	while (format != NULL && format[j] != '\0')
	{
		switch (format[j])
		{
			case 'i':
				printf("%d", va_arg(len, int));
				k = 0;
				break;
			case 'f':
				printf("%f", va_arg(len, double));
				k = 0;
				break;
			case 'c':
				printf("%c", va_arg(len, int));
				k = 0;
				break;
			case 's':
				s = va_arg(len, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				k = 0;
				break;
			default:
				k = 1;
				break;
		}
		if (format[j + 1] != '\0' && k == 0)
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(len);
}
