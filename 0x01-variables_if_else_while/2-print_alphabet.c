#include <stdio.h>
/**
 * main - This is the main function
 *
 * Return: return 0
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	int n;

	for (n = 0; n < 26; n++)
	{
		putchar(alpha[n]);
	}
	putchar('\n');
	return (0);
}

