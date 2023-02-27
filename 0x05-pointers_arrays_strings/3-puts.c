#include "main.h"
/**
 * _puts - printing string
 *
 * @str: string value
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
