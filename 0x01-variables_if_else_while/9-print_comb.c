#include <stdio.h>
/**
 * main - prints possible combinations of single digit numbers
 *
 * Return: always 0
 */
int main(void)
{
char ch;
for (ch = 0; ch <= 9; ch++)
{
putchar(ch + '0');
putchar(',');
putchar(' ');
}
}
