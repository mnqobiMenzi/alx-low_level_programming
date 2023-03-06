#include "main.h"
/**
 * _strpbrk - find letter
 * @s: string value
 * @accept: search
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0 ; *(s + x) ; x++)
	{
		for (y = 0; *(accept + y) ; y++)
		{
			if (*(accept + y) == s[x])
			{
				return (s + x);
			}
		}
		if (*(accept + y) == s[x])
		{
			return (s + x);
		}
	}
	return (0);
}
