#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @n: parameter.
 * @separator: ptr
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argumen;

	unsigned int i;

	va_start(argumen, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%i", va_arg(argumen, unsigned int));
			if (i < n - 1)
			printf("%s", separator);
		}
		else
		{
			printf("%i", va_arg(argumen, unsigned int));
		}
	}
	printf("\n");
	va_end(argumen);
}
