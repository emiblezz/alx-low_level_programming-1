#ifndef _HOLBERTON
#define _HOLBERTON

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * _memset - fills a memory with a constant byte
 * @s: pointer to memory area
 * @b: constant value
 * @n: number of bytest to fill in
 * Return: filled memory byte
 */

char *_memset(char *s, char b, unsigned int n);


/**
 * _memcpy - copies memory area
 * @dest: destination to be copied
 * @src: source to copy from
 * @n: bytes to copy
 * Return: the result
 */

char *_memcpy(char *dest, char *src, unsigned int n);

#endif
