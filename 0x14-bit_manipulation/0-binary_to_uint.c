#include "holberton.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int length = 0, i;

	if (b == NULL)
		return (sum);

	while (b[length] != '\0')
		length++;
	length -= 1;
	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (sum);

		if (b[i] == '1')
			sum += (1 * (1 << length));
		i++;
		length--;
	}

	return (sum);
}
