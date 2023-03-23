#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - print array
 * @array: array
 * @size: number of arrays
 * @action: pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
