#include <stdio.h>
/*
 * main - prints alphabets in lowercase
 *
 *
 * Return: always 0(success)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	return (0);
}
