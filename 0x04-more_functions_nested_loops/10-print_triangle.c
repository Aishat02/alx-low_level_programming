#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: checks the input
 * Return: always 0
 */
void print_triangle(int size)
{
	int a, b;

	for (a = 1; a <= size; a++)
	{
	if (size <= 0)
	{
	_putchar('\n');
	}
for (b = a; b <= size; b++)
{
_putchar(' ');
}
for (b = 1; b <= a; b++)
{
	_putchar('#');
}
_putchar('\n');
}
_putchar('\n');
}
