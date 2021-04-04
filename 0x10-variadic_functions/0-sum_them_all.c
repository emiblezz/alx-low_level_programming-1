#include "variadic_functions.h"

/**
 * sum_them_all - adds all the arguments in the function
 * @n: number of arguments
 * Return: the result if success, otherwise return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arguments;

	va_start(arguments, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(argumentsm int);
	va_end(arguments);
	return (sum);
}
