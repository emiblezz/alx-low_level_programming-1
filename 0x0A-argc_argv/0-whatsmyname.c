#include <stdio.h>
#include "holberton.h"

/**
 * main - print the name of the file
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 Always (on success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
