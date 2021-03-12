#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints numbers
 * @n: parameter.
 * @separator: ptr
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argumen;

	unsigned int i;
	char *str;

	va_start(argumen, n);
	for (i = 0; i < n; i++)
	{
		str = (va_arg(argumen, char *));

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL)
		{
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argumen);
}
