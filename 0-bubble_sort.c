#include "sort.h"

void swap_ints(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

void bubble_sort(int *array, size_t size)
{
	size_t l, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (l = 0; l < len - 1; l++)
		{
			if (array[l] > array[l + 1])
			{
				swap_ints(array + l, array + l + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
