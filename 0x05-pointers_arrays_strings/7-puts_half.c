#include "main.h"
/**
 * puts_half - Print half and new line
 * if od len n - (length_of_string - 1)/2
 * @str : String variable
 * Return : Always length
 */

void puts_half(char *str)
{
	int a, n, longi;

	longi = 0;

	for (a = 0; str[s] != '\0'; a++)
	{
		longi++;

		n = (longi / 2);

		if ((longi % 2) == 1)
			n = ((longi + 1) / 2);
		for (a = n; str[a] != '\0'; a++)
			_putchar(str[a]);
		_putchar('\n')
	}
}
