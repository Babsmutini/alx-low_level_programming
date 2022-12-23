#include "main.h"
/**
 * reverse_array - function to reverse numbers in an array
 *
 * @a: array of elements
 *
 * @n: number of elements in array
 *
*/
void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}

