#include "main.h"
/**
 * _isupper - Uppercase letters
 *
 * @c: Variable
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
