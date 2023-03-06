#include "main.h"

/**
 * _memset - fills memory with a constant byte
 i* @s: memory area pointed to
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*s++ = b;
	}
	return (s);
}
