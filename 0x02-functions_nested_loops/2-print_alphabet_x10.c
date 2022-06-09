#include "main.h"
/**
 * print_alphabet_x10 - Prints all alphabets in lowercase form ascii 10 times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int j;

	int i;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
