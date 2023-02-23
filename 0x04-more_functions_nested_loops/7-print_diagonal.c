#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: checks the input
 * Return: always 0
 */
void print_diagonal(int n)
{
	int t, q;

	for (t = 0; t < n; t++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		for (q = 0; q < t; q++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
