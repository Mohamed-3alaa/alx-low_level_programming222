#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the value of n status:
 *              greater than, is zero and is not less than 6.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_digit = n % 10;

	if (Last_digit > 5)
		printf("last digit of %i is %i and is greater than 5\n", n, Last_digit);
	else if (Last_digit == 0)
		printf("last digit of %i is %i and is 0\n", n, Last_digit);
	else if (Last_digit < 6 && Last_digit != 0)
		printf("last digit of %i is %i and is less than 6 and not 0\n", n, Last_digit);

	return (0);
}
