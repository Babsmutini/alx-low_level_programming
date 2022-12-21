#include "main.h"
#include "stdio.h"
#include "string.h"
/**
 * print_rev - prints string in reverse
 *
 * @s: the string to be reversed
 *
 * Return: string in reverse
 */
void print_rev(char *s)
{
int len = strlen(s);

int i = 0;
for (i = len - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar("\n");
}
