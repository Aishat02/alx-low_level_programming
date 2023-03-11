#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of input characters
 *
 * Return: 1 if the program does not,
 * receive two arguments,
 * otherwise return 0.
 */
int main(int argc, char *argv[])
{
	int first, second;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	first = atoi(argv[1]);
	second = atoi(argv[2]);
			printf("%d\n", first * second);
			return (0);
}
