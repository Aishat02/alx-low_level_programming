#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 *
 * @s: string input
 *
 * Return: @s
*/

char *leet(char *s)
{
	int q, x = 0;
	int a[] = {97, 101, 111, 116, 108};
	int z[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (s[x] != '\0')
	{
		for (q = 0; q < 5; q++)
		{
			if (s[x] == a[q] || s[x] == z[q])
			{
				s[x] = n[q];
				break;
			}
		}
		x++;
	}
	return (s);
}
