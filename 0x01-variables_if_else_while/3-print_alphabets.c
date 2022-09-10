#include <stdio.h>
#include <stdlib.h>
/* lists letters a-zA-Z followed by newline using putchar */

/**
 * main - lists letters and exits
 * Return: returns 0
 */
int main(void)
{
	int ch;
	int ar;

	ch = 'a';
	ar = 'A';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ar <= 'Z')
	{
		putchar(ar);
		ar++;
	}
	putchar('\n');
	return (0);
}
