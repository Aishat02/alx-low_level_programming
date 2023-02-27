#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of the string
 * @str: checks the input
 *
 */
void puts_half(char *str)
{
	int n = strlen(str);

	for (int i = n / 2; i < n; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
