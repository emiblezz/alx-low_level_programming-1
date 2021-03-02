#include "holberton.h"
#define NULL 0

/**
 * _strchr - locates a character in a string
 * @s: the string to be manipulated
 * @c: the character to be located
 * Return: a pointer to the first occurence of the character c in s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c) /* find match */
		i++;

	if (s[i] == c) /* if match, assign to address */
		return (&s[i]);
	else
		return (NULL);
}
