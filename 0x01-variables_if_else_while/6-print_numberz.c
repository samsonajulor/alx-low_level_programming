#include <stdio.h>
#include <stdlib.h>
/* lists base 10 numbers 0-9 followed by newline using putchar */

/**
 * main - lists numbers and exits
 * Return: returns 0
 */
int main(void)
{
	int n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);
}
