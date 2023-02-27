#include "main.h"
#include <string.h>

/**
 * puts2 - prints even characters of a string
 *
 * @str: checks the input
 */
void puts2(char *str)
{
	int n = 0;
	int t = strlen(str);

	for (n = 0; n < t; n += 1)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
