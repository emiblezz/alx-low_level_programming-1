#include "search_algos.h"
/**
 * binary_search - search through an array using binary search
 * @array: the array to be searched
 * @size: size of the array
 * @value: value to be searched
 * Return: returns the index of the first value found else returns -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (size < 1)
		return (-1);
	int left = 0;
	int right = (int)size - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2, i;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == left)
			printf("%d", array[i]);
			else
			printf(", %d", array[i]);
		}
		printf("\n");
		if (value == array[mid])
			return (mid);
		if (array[mid] > value)
			right = mid - 1;
		if (array[mid] < value)
			left = mid + 1;
	}
	return (-1);
}
