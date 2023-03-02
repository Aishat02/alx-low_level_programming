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
	int password = 2772;
	int i, n;

	srand(time(NULL));

	for (i = 0; passsword > 122; i++)
	{
		n = (rand() % 125) + 1;
		printf("%c", n);
		password -= n;
	}

	printf("%c", password);

	return (0);
}
