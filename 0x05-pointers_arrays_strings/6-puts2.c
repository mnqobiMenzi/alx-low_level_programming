#include "main.h"
/**
 * puts2 - print the letter t
 * @str: string value
 * Return: letter t
 */

void puts2(char *str)
{
	int x = 0;
	int t = 0;
	char *y = str;
	int c;

	while (*y != '\0')
	{
		y++;
		x++;
	}
	t = x - 1;
	for (c = 0; c <= t; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
