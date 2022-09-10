#include <stdio.h>
#include <stdlib.h>
/* lists all numbers 00-99 with putchar */

/**
 * main - lists numbers and exits
 * Return: returns 0
 */
int main(void)
{
	int n;
	int u;

	n = '0';
	u = '0';
	while (n <= '9')
	{
		while (u <= '9')
		{
			putchar(n);
			putchar(u);
			if (!((n == '9') && (u == '9')))
			{
				putchar(',');
				putchar(' ');
			}
			u++;
		}
		u = '0';
		n++;
	}
	putchar('\n');
	return (0);
}
