#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 1;
	int j = 0;

	for (i = 1; i <= 10;)
	{
		for (j = 'a'; j <= 'z';)
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
