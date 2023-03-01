#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: checks the input
 *
 * Return: result with sign
 */
int _atoi(char *s)
{
	int sign = 1, res = 0, i = 0;
    /**
     * Iterate through the whole string and check for
     * any + or - signs and if any numbers are present
     */
	for (; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		/**
		 * If any numbers are present,
		 * convert them to integers and
		 * add it to the result
		 */
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = (res * 10) + (s[i] - '0');
		}
	}
    /*Return the result with the sign*/
	return (sign * res);
}
