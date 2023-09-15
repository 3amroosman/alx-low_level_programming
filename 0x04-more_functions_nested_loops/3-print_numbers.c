#include "main.h"

/**
 * print numbers - 0-9
 *
 * Reurn (0) always
 */

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	}	while (num > 0 && num <= 9);
	_putchar('\n');
}
