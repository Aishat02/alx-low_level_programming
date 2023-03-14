#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: input to string 1
 * @s2: input to string 2
 *
 * Return: NULL on faliure
*/
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
		return (NULL);

	int s1_n = 0, s2_n = 0, i;
	char *z = NULL;

	for (i = 0; s1[i] != '\0'; i++)
		s1_n++;
	for (i = 0; s2[i] != '\0'; i++)
		s2_n++;

	if (z == NULL)
		return (NULL);

	for (i = 0; i < s1_n; i++)
	{
		z[i] = s1[i];
	}
	for (i = 0; i < s2_n; i++)
	{
		z[s1_n + i] = s2[i];
	}
	z[s1_n + s2_n] = '\0';
	return (z);
}
