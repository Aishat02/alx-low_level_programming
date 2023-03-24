#include <stdarg.h>

/**
 * sum_them_all - sum al of its parameter
 * @n: checks the input
 *
 * Return: value of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, s = 0;
	va_list add;

	va_start(add, n);

	for (; s < n; s++)
		i += va_arg(add, int);
	va_end(add);
	return (i);
}
