#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t l, r;

	if (array == NULL || size < 2)
		return;

	for (l = 0; l < size - 1; l++)
	{
		min = array + l;
		for (r = l + 1; r < size; r++)
			min = (array[r] < *min) ? (array + r) : min;

		if ((array + l) != min)
		{
			swap_ints(array + l, min);
			print_array(array, size);
		}
	}
}
