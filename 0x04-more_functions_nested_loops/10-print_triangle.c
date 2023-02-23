#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: checks the input
 * Return: always 0
 */
void print_triangle(int size)
{
	int a, b, c;

	for (a = 0; a < size; a++)
	{
	if (size <= 0)
	{
	_putchar('\n');
	}
for (b = a; b < size; b++)
{
_putchar(' ');
}
for (c = 0; c <= a; c++)
{
	_putchar('#');
}
_putchar('\n');
}
}
