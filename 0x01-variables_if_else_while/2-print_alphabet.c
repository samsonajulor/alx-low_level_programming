#include <stdio.h>
#include <stdlib.h>
/* lists letters a-z lowercase followed by newline using putchar */

/**
 * main - lists letters and exits
 * Return: returns 0
 */
int main(void)
{
	int ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
