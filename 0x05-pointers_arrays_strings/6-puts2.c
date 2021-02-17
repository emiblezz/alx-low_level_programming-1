#include "holberton.h"

/**
 * puts2 - prints every other character
 * @str: the string
 */

void puts2(char *str)
{
	int x;

	x = 0;
	while (str[x])
	{
		_putchar(str[x]);
		x += 2;
	}
	_putchar('\n');
}
