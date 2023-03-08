#include "main.h"

/**
 * _put_recursion - String followed by a new line.
 * @s: string variable
 * Return: 1 on Success
 */

void _put_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar ('\n');
		return;
	}
	_putchar(*s);
	_puts_rcursion(s + 1);
}
