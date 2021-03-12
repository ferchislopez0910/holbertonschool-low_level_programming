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

	va_start(argumen, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%s", va_arg(argumen, char *));
			if (i < n - 1)
			{
				printf("%s", separator);
					if (argumen == NULL)
						printf("(nil)");
			}
		}
	}
	printf("\n");
	va_end(argumen);
}
