#include "main.h"
/**
 * _isdigit - Checks if digits
 *
 * @c: Variable
 *
 * Return:  1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
