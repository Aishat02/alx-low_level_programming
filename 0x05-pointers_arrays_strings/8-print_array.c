#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer
 *@n: checks the input
 */
void print_array(int *a, int n)
{
	for (n = 0; n < 5; n++)
	{
		printf("%d", a[n]);
		if (n < 4)
			printf(",");
	}
}
