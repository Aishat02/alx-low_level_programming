#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: no of integers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int s = 0;
	va_list pn;

	va_start(pn, n);
	for (; s < n; s++)
	{
		printf("%d", va_arg(pn, int));
		if (separator && s != n - 1)
			printf("%s", separator);
	}
	va_end(pn);
	printf("\n");
}
