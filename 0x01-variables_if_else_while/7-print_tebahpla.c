#include <stdio.h>
#include <stdlib.h>
/* rahctup gnisu enilwen yb dewollof esacrewol z-a srettel stsil */

/**
 * main - lists letters and exits
 * Return: returns 0
 */
int main(void)
{
	int hc;

	hc = 'z';
	while (hc >= 'a')
	{
		putchar(hc);
		hc--;
	}

	putchar('\n');
	return (0);
}
