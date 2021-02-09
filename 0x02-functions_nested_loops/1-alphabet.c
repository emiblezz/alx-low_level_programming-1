#include "holberton.h"

/**
 * print_alphabet - prints alphabets in lower case followed by a new line
 * Return: Alwasy 0
 */

void print_alphabet(void)
{
	char letter = 'a';

	for (letter = 'a', letter <= 'z', letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');

	return (0);
}
