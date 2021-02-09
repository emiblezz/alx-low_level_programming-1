#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * _putchar -writes the character c to stdout
 * @c: The input that will be printed
 * Return: 1 on succes and -1 on error
 */

int _putchar(char c);

/**
 * print_alphabet(void) - prints the alphabet, in lowercase, followed by a new
 * line
 */

void print_alphabet(void);

/**
 * print_alphabet_x10(void) - prints the lower alphabet 10 times
 */

void print_alphabet_x10(void);

/**
 * _islower - check lower case
 * @c: a character to be checked
 * Return: 1 if lower case othewise 0
 */

int _islower(int n);

/**
 * int print_sign - checks for a number sign
 * @n: the number to be checked
 * Return: 1 for num greater than 0, 0 for 0, -1 for less than 0
 */

int print_sign(int n);

#endif
