#include "main.h"
/**
 * print_diagonal - diagonal lines
 *
 * @n: varaible
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;
		int y;

		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (y == x)
					_putchar('\\');
				else if (y < x)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
