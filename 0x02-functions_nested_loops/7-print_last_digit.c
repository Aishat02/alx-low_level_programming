#include "main.h"

/**
 * print_last_digit-prints the last digit of an interger.
 * @n:number to compute last digit.
 * Return:last digit.
 */
int print_last_digit(int n)
{
	int t = n % 10;

	if (t < 0)
	{
		t = t * -1;
	}
	_putchar(t + '0');
	return (t);
}
