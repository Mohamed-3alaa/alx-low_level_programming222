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
	int n;
	
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
		printf("last digit of %i is %i and is greater than 5\n", n, m);
	else if (m == 0)
		printf("last digit of %i is %i and is 0\n", n, m);
	else if (m < 6 && m != 0)
		printf("last digit of %i is %i and is less than 6 and not 0\n", n, m);
	return (0);
}
