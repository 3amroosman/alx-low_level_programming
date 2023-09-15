#include "main"

void print_line(int n)
{
	int InChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
	for (InChr = 1; InChr <= n; InChr++)
				_putchar('_');
			_putchar('\n');
	}
}

