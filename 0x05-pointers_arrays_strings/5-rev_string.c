#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse string
 *
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int len = strlen(s) - 1;
	char temp;

	for (i = 0; i <= (len / 2); i++)
	{
		temp = s[len - i];

		s[temp - i]  = s[i];

		s[i] = temp;
	}

}
