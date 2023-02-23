#include "main.h"

/**
 * print_square - prints a square
 * @size: checks the input
 * Return: always 0
 */
void print_square(int size)
{
	int e, r;

	for (e = 0; e < size; e++)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}
		for (r = 1; r < size; r++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}
}
