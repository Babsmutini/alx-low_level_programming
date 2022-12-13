#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - print random numbers
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("is positive");
	}
	else if (n == 0)
	{
	printf("is zero");
	}
	else
	{
	printf("is negative");
	}
	/* your code goes there */
	return (0);
}
