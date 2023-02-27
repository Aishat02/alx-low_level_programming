#include "main.h"


/**
 * swap_int - swaps the values of two integers
 *@a: first integer
 *@b: second integer
 */
void swap_int(int *a, int *b)
{
	/* temporary variable */
	int p;

	/* p stores the value of *a */
	p = *a;
	/* *a stores the value of *b */
	*a = *b;
	/* *b stores the value of p which contains the former value of *a */
	*b = p;
}
