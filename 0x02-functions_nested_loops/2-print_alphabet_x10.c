#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times alphabets in lowercase
 * follow by a new line
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
