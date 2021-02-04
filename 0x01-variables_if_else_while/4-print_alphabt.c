#include <stdio.h>

/**
 * main - print lowercase alpha from a to z but don't include q and e
 * Return: Always 0 (Success)
 */

int main()
{
	char l = 'a';

	while (l <= 'z')
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');

	return (0);
}
