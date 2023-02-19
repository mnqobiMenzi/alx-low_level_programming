#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (succss)
 */

int main(void)
{
	char x;

	x = 'a';
	while
		(x <= 'z') {
			if ((x != 'q' || x == 'e') && x <= 'z')
				putchar(x);
			x++;
		}
	putchar('\n');
	return (0);
}
