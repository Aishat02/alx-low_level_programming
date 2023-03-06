#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *@a: checks the input
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int i, n;

	/* print 8 lines */
	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[i][n]);
		}
		_putchar('\n');
	}
}
