#include "main.h"

/**
 *_isalpha - check alphabet
 *
 *@c: store the alphabet value
 *
 * Return: 1 if true and 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
