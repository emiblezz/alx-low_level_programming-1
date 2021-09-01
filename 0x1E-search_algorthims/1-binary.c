#include "search_algos.h"
/*
 * binary_serach - 
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = int(size);
	int mid = (left + right) / 2;

	while (left <= right)
	{
		if (value == array[mid])
			return mid;
		if (array[mid] > value)
		{
			right = mid;
			mid = (left + right) / 2;
		}
		if (array[mid] < value)
		{
			left = mid;
			mid = (left + right) / 2;
		}
	}
	return -1;
}
