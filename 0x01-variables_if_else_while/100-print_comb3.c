#include <stdio.h>
#include <stdlib.h>
/* lists all numbers 00-99 with putchar */

/**
 * main - lists numbers and exits
 * Return: returns 0
 */
int main(void)
{
	int n1;
	int n2;

	n1 = '0';
	n2 = '0';
	while (n1 <= '9')
	{
		while (n2 <= '9')
		{
			if (n1 >= n2)
			{
				n2++;
				continue;
			}
			putchar(n1);
			putchar(n2);
			if (!((n1 == '8') && (n2 == '9')))
			{
				putchar(',');
				putchar(' ');
			}
			n2++;
		}
		n2 = '0';
		n1++;
	}
	putchar('\n');
	return (0);
}
