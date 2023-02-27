#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 *
 * @s: checks the input
 */
void rev_string(char *s)
{
	int n, t, c;

	n = strlen(s);

	for (t = 0; t < n / 2; t++)
	{
		c = s[t];
		s[t] = s[n - t - 1];
		s[n - t - 1] = c;
	}
}
