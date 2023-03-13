#include "main.h"
#include <stdlib.h>

/**
 * create_array - array
 * @size: size of the array
 * @c: char value to assign
 * Return: array value
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
