#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* outputs random number, prints last digit, prints compares to a few #'s */

/**
 * main - outputs random number and compares last digit to a few #'s
 * Return: returns 0
 */
int main(void)
{
	int n;
	int f;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	f = n % 10;

	printf("Last digit of %d is %d ", n, f);

	if (f > 5)
		printf("and is greater than 5\n");
	if (f == 0)
		printf("and is 0\n");
	if (f < 6 && !(f == 0))
		printf("and is less than 6 and not 0\n");
	return (0);
}
