#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints numbers
 * @n: parameter.
 * @separator: ptr
 */

void print_all(const char * const format, ...)

{
	va_list args;

    int cont = 0;

    va_start(args, format);


    while (*format != '\0') 
	{
        switch (*format) 
		{
            case 's':
                fprintf(stdout, "arg[%d]: %s\n", cont, va_arg(args, const char *));
                break;
            case 'd':
                fprintf(stdout, "arg[%d]: %d\n", cont, va_arg(args, int));
                break;
            case 'f':
                fprintf(stdout, "arg[%d]: %f\n", cont, va_arg(args, double));
                break;
        }
        cont += 1;
    }
    va_end(args);
    return ;
}
