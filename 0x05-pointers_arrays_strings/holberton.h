#ifndef _HOLBERTON
#define _HOLBERTON

int _putchar(char c);

/**
 * reset_to_98 - updates the value it points to to 98.
 * @n: the parameter to be updated
 */

void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integers
 * @a: argument one
 * @b: argument two
 */

void swap_int(int *a, int *b);

/**
 * _strlen - counts the lengyh of a string
 * @s: a string to be counted
 * Return: The length of the string
 */

int _strlen(char *s);

/**
 * _puts - prints a string followed by a new line
 * @str: a string to be printed
 */

void _puts(char *str);

/**
 * print_rev - prints a string in the reverse followed by a new line
 * @s: a string to be printed
 */

void print_rev(char *s);

/**
 * rev_string - a function that reverses a string
 * @s: the string to be reversed
 */

void rev_string(char *s);

/**
 * puts2 - prints every other character
 * @str: the string
 */

void puts2(char *str);

/**
 * puts_half - prints half of a string followed by a new line
 * @str: the argument
 */

void puts_half(char *str);



#endif
