#include <stdio.h>
/**
 * main - prints possible combinations of single digit numbers
 *
 * Return: always 0
 */
int main(void)
{
int ch;

for (ch = 0; ch <= 9; ch++)
{
	putchar(ch + '0');
	if (ch != 9)
	{
		putchar(',');
		putchar(' ');
	}
}
}
