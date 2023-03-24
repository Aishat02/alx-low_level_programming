#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list pa;
	unsigned int i = 0, n = 0, q = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(pa, format);
	while (format && format[i])
	{
		while (t_arg[n])
		{
			if (format[i] == t_arg[n] && q)
			{
				printf(", ");
				break;
			} n++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(pa, int)), q = 1;
			break;
		case 'i':
			printf("%d", va_arg(pa, int)), q = 1;
			break;
		case 'f':
			printf("%f", va_arg(pa, double)), q = 1;
			break;
		case 's':
			str = va_arg(pa, char *), q = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	va_end(pa);
	printf("\n");
}
