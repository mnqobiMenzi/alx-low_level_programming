#include "main.h"

/**
 * _islower - Checks lowercase
 * @c:char value
 * Return: 1 for lower and 0 other
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'Z')
		return (1);
	else
		return (0);
}
