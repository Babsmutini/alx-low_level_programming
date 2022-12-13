#include <stdio.h>
/**
 * main- print all single digit numbers starting from 0
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
for (int i = 0; i <= 9; i++)
	putchar(i + '0');
putchar('\n');
return (0);
}
