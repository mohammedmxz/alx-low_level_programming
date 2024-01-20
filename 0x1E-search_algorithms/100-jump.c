#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a, b, m;

	if (array == NULL)
		return (-1);

	a = 0;
	m = sqrt(size);
	b = m;
	printf("Value checked array[%lu] = [%d]\n", a, array[a]);

	while (array[b] < value)
	{
		a = b;
		b += m;
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);

		if (b >= size)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", a, b);

	while (array[a] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		a = a + 1;

		if (a == size)
			return (-1);
	}

	printf("Value checked array[%lu] = [%d]\n", a, array[a]);

	if (array[a] == value)
		return (a);
	else
		return (-1);
}
