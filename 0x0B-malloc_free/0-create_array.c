#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an arrays of chars
 * @c: stores specific char
 * @size: the size of the array to print
 *
 * Return: NULL if size = 0,
 * a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	int n;
	char *p = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	for (n = 0; n < size; n++)
	{
		p[n] = c;
	}
	return (p);

	if (p == 0)
	{
		return (NULL);
	}
}
