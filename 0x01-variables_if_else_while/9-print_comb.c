#include <stdio.h>
#include <stdlib.h>
/* lists all unique combinations of numbers 0-9 with putchar */

/**
 * main - lists numbers and exits
 * Return: returns 0
 */
int main(void)
{
	int n;
	int f;

	n = '0';
	f = '9';
	while (n <= f)
	{
		putchar(n);
		if (!(n == f))
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}

	putchar('\n');
	return (0);
}
