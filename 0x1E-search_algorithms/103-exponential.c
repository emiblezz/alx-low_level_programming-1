#include "search_algos.h"
/**
 * binary_search_recursive - search through an array using binary search
 * @array: the array to be searched
 * @size: size of the array
 * @value: value to be searched
 * @left: left side start point of the array to be searched
 * @right: right side end poin of the array to be searched
 * Return: returns the index of the first value found else returns -1
 */
int binary_search_recursive(int *array, size_t size,
			     int value, int left, int right)
{
	if (!array)
		return (-1);
	if (left > right || right < left)
		return (-1);
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
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (binary_search_recursive(array, size, value,
						left, mid - 1));
	else
		return (binary_search_recursive(array, size, value,
						mid + 1, right));
}

int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1, higher;

    if (!array)
        return (-1);
    if (size == 0) 
        return (-1);

    while (bound < size && array[bound] < value) 
    {
        printf("Value checked array[%d] = [%d]\n", (int)bound, array[bound]);
        bound *= 2;
    }
    if (bound >= size)
        higher = size - 1;
    else
        higher = bound + 1;
    int res = binary_search_recursive(array, size, value, bound / 2, higher);

	return (res);
}
