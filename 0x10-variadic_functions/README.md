**#0x10-variadic_functions#**

#Resources#
* https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html
* https://en.wikipedia.org/wiki/Stdarg.h
* https://www.youtube.com/watch?v=1W4oyuOdXv8

# A.2 Variadic Functions
ISO C defines a syntax for declaring a function to take a variable number or type of arguments. (Such functions are referred to as varargs functions or variadic functions.) However, the language itself provides no mechanism for such functions to access their non-required arguments; instead, you use the variable arguments macros defined in stdarg.h.

* 0. Beauty is variable, ugliness is constant
    Write a function that returns the sum of all its parameters.
    Prototype: int sum_them_all(const unsigned int n, ...)

* 1. To be is to be the value of a variable
    Write a function that prints numbers, followed by a new line.
    Prototype: void print_numbers(const char *separator, const unsigned int n, ...)

* 2. One woman's constant is another woman's variable
    Write a function that prints strings, followed by a new line.
    Prototype: void print_strings(const char *separator, const unsigned int n, ...)

* 3. To be is a to be the value of a variable
    Write a function that prints anything.
    Prototype: void print_all(const char * const format, ...)

**#By#**
Maria Fernanda Lopez A
March 11/21
