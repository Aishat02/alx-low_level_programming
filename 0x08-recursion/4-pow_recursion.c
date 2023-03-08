#include "main.h"

/**
 * _pow_recursion - exponent function
 * @x: checks the input
 * @y: exponent
 *
 * Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
