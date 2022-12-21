#include "main.h"
/**
 * _puts - prints a string
 *
 * @str: the string
 *
 * Return: string
 *
 */
void _puts(char *str)
{
int i;

i = 0;
while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
_putchar("\n");
}
