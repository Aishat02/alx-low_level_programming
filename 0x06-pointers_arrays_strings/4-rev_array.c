#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *@a: checks the input
 *@n: numbers of elements in the array
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int *begin = a;
	int *end = a + n - 1;

	while (begin < end)
	{
		int temp = *begin;
		*begin = *end;
		*end = temp;

		begin++;
		end--;
	}
}
