#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 2772;
	int n;

	srand(time(0));
	while (i)
	{
		n = rand() % 100;
		if (n <= 94)
			n += 32;
		else
			continue;
		if (i - n == 0)
		{
			i -= n;
			printf("%c", n);
		}
		else if (i - n - 32 > 0)
		{
			i -= n;
			printf("%c", n);
		}
	}
	return (0);
}
