#include "main.h"

/**
 * _memset - insert n times the content of b into s
 * @s: string to insert b in
 * @b: string to insert
 * @n: Amount to times to insert
 * Return: string
 *
*/

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
