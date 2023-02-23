#include "main.h"
/**
 * more_numbers - Ten times the numbers fro 0 t 14
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			if (y >= 10)
			{
				_putchar(y / 10 + '0');
				_putchar(y % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
