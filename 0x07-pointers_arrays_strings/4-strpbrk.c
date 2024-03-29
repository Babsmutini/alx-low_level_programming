#include "main.h"

/**
 *_strpbrk - return the first occurence of a string's char in a string.
 *@s: the first string.
 *@accept: the second string.
 *Return: char.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
				return (s + i);
	return (0);

}
