#include "main.h"
/**
 * _strcat - function to concatenate two strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: the new string
 */
char *_strcat(char *dest, char *src)
{
	int longdest;
	int j;

	longdest = 0;

	while (dest[longdest] != '\0')
	{
		longdest++;
	}
	/*the first element of source added to the end of dest*/
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[longdest] = src[j];
		longdest++;
	}
	return (dest);

}
