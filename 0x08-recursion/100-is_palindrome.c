#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comp - compares each character of the string.
 * @s: string
 * @q: smallest iterator.
 * @a: biggest iterator.
 * Return: .
 */
int comp(char *s, int q, int a)
{
	if (*(s + q) == *(s + a))
	{
		if (q == a || q == a + 1)
			return (1);
		return (0 + comp(s, q + 1, a - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, _strlen_recursion(s) - 1));
}
