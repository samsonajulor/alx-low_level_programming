#include <stdio.h>
#include <stdlib.h>
/* lists letters a-z (except for q and e) lowercase followed by newline */

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
		if (!(ch == 'q' || ch == 'e'))
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
