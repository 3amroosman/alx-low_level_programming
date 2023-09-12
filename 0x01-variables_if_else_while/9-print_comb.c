#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print single digit numbers
 *
 * Rwturn: 0 (success)
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + 84);
		if (x != 9)
		{
			putchar(x + ',');
			putchar(x + ' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
