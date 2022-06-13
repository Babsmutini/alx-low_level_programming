#include "main.h"
/**
 * swap_int - swap two values
 *
 * @a : points to a
 * @b : points to b
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
