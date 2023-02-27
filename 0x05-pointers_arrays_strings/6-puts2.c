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

	for (n = 0; str[n] != '\0'; n++)
	{
		if (n % 2 == 0)
			_putchar(str[n]);
	}
	_putchar('\n');
}
