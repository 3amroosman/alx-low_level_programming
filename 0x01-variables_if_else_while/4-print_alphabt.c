#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabets in lowercase except q and e
 *
 * Return: 0 (succes)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			ch++;

		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
