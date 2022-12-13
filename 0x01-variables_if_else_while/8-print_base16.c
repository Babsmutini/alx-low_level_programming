#include <stdio.h>
/**
 * main- print all single digit numbers starting from 0
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
for (int i = 0; i < 16; i++)
{
	if (i > 9)
	{
		putchar('a' + i - 10);
	}
	else
	{
		putchar(i + '0');
	}

}

putchar('\n');
return (0);
}
