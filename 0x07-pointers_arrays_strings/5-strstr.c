#include "main.h"
/**
 * _strstr - substring.
 * @haystack: char array
 * @needle: char array
 * Return: array
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *c = haystack;

		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
		{
			needle++;
			haystack++;
		}
		if (!*needle != '\0')
		{
			return (c);
		}
		haystack++;
	}
	return (0);
}
