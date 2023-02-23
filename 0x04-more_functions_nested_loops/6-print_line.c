#include "main.h"

/**
 * print_line - draws a line in the terminal
 * @n: checks the input
 * Return: always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
