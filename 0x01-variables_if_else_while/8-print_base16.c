#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n, t;

	for (n = 0; n < 10; n++)
	{
		putchar ('0' + n);
	}
	for (t = 'a'; t <= 'f'; t++)
	{
		putchar (t);
	}
	putchar ('\n');

	return (0);
}
