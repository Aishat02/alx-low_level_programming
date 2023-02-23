#include <stdio.h>

/**
 * main - entry point for the program
 * Return: always 0 (success)
 */
int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k % 3 == 0 && k % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (k % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (k % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		printf("%d ", k);
	}
	return (0);
}
