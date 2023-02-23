#include <stdio.h>
#include <math.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	long n = 612852475143;
	int w = 2;

	for ( ; w <= n; w++)
	{
		if (n % w == 0)
		{
			n /= w;
			w--;
		}
		printf("%ld\n", w);
	}
	return (0);
}


