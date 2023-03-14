#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *ptr;
	int length, n = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
	{
		length++;
	}

	ptr = (char *) malooc(length + 1);

	if (ptr == NULL)
		return (NULL);

	for (; n < length; n++)
	{
		ptr[n] = str[n];
	}
	ptr[length] = '\0';
	return (ptr);
}
