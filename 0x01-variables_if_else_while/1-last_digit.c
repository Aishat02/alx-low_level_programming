#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point for program execution
 *
 * Return: always return 0 (success)
 */
int main(void)
{
	/* declare two variables*/
	int n, t;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/*To find the last digit find the remainder of the number by dividing n */
	t = n % 10;
	if (t > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, t);
	else if (t == 0)
		printf("Last digit of %i is %i and is 0\n", n, t);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, t);

	return (0);
}
