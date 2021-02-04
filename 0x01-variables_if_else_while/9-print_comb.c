#include <stdio.h>

/**
 * main - prints numbers from 0 to 9 separated by a comma followed by a space
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = '1';
	char space = ' ';
	char comma = ',';

	while (num <= '9')
	{
		if (num < '9')
		{
			putchar(num);
			putchar(comma);
			putchar(space);
		}
		else
			putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
