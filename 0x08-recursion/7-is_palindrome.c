#include "holberton.h"

int is_palindrome_(char *s, int length, int start);

/**
 * is_palindrome_ - helper function for is_palindrome
 *
 * @length: size of string
 * @start: counter for palindrome
 * @s: string to check
 * Return: returns itself if incomplete, or 1 for palindrome, 0 for not
 */
int is_palindrome_(char *s, int length, int start)
{
	if (start >= length)
		return (1);
	if (s[start] != s[length - 1])
		return (0);
	return (is_palindrome_(s, --length, ++start));

	return (1);
}

/**
 * _strlen_recursion - recursively checks string length
 *
 * @s: string to check length of
 *
 * Return: returns itself if not complete, or length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	else
		return (1 +  _strlen_recursion(s + 1));
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 *
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);
	return (is_palindrome_(s, length, 0));
}
