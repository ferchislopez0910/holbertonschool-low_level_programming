#include "holberton.h"

/**
* swap_int - updates the value it points to to 98.
*
*@a: the value number 1
*@b: the value number 2
*
*/

void swap_int(int *a, int *b)
{
int vartr = *a;
*a = *b;
*b = vartr;
}
