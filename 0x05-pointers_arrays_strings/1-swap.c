#include "main.h"
/**
 * swap_int - swaps values of two integers
 *
 * @a: First parameter
 * @b: Second parameter
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
