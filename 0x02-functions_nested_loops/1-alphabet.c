#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i = 0;

	for (i = 'a'; i <= 'z';)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
