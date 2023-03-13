#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicate to memory
 * @str: char value
 * Return: 0
 */

char *_strdup(char *str)
{
	char *c;
	int i;
	int j;

	i = 0;
	j = 0;
	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	c = malloc(sizeof(char) * (i + 1));

	if (c == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		c[j] = str[j];
	return (c);
}
