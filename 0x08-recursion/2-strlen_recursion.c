#include "main.h"
 /**
  * _strlen_recursion - length of string
  * @s: strin value
  * Return: 1 on success
  */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
