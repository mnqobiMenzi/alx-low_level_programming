#include "main.h"

/**
 * _puts_recursion - String followed by a new line.
 * @s: string variable
 * Return: 1 on Success
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar('\n');
	_puts_recursion(s + 1);
}
