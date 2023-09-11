#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digit numbers*
 *
 * Return: 0 (success)
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + 48);
		x++;
	}
	putchar('\n');
	return(0);
}
