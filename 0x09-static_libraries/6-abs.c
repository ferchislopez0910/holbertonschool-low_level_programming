#include "holberton.h"
/**
*_abs - prints the last digit of a number.
*@i: integre converted
*Return: the value of the last digit
*/
int _abs(int i)
{
if (i < 0)
i = i * -1;
return (i);
}
