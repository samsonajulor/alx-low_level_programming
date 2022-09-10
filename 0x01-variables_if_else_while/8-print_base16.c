#include <stdio.h>
#include <stdlib.h>
/* lists base 16 numbers 0-f followed by newline using putchar */

/**
 * main - lists numbers and exits
 * Return: returns 0
 */
int main(void)
{
	int n;
	int ch;

	n = '0';
	ch = 'a';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
