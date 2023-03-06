#include "main.h"
/**
 * _strspn - length of text
 * @s: array
 * @accept: array
 * Return: position
 */

unsigned int _strspn(char *s, char *accept)
{
	int word;
	int position = 0;

	while (s[position])
	{
		for (word = 0; accept[word]; word++)
		{
			if (accept[word] == s[position])
			{
				break;
			}
		}
		if (!accept[word])
		{
			break;
		}
		position++;
	}
	return (position);
}
