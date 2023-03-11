#include "main.h"

/**
 * _isupper - Uppercase
 * @c: char to check
 *
 * Return: 0 ir 1
 */

int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
