#include <stdio.h>
/**
 * main - prints alphabet in lowercase except q and e
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch == 'q' || ch == 'e')
		continue;
	putchar(ch);
}
putchar('\n');
return (0);
}
