#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 9.
 * Return: nothing
 */
void more_numbers(void)
{
	int n, w;

	for (n = 0; n <= 9; n++)
	{
		for (w = 0; w <= 14; w++)
		{
			if (w >= 10)
			{
				_putchar(w / 10 + '0');
			}
				_putchar(w % 10 + '0');
		}
		_putchar('\n');
	}
}
