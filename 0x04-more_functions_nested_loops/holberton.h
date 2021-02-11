#ifndef _HOLBERTON_
#define _HOLBERTON_
/**
 * _putchar - prints the given char
 * @c: the char to be printed
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * _isupper - cheches for uppercase character
 * @c: The character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c);

/**
 * isdigit - checkes for digit 0 through 9
 * @c: the char to be checked
 * Return: 1 if c is digit, otherwise 0
 */

int _isdigit(int c);

/**
 * mul - multipies two integers
 * @a: number1
 * @b: number2
 * Return: The multiplication result of the numbers
 */

int mul(int a, int b);

/**
 * print_numbers - prints integer from 0 to 9
 */

void print_numbers(void);

#endif
