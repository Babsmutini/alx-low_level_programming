#include <stdio.h>
/**
 * main -  contains 0
 * @argc: contains the number of arguments
 * @argv: contains the array of arguments
 * Return: returns 0 on success
*/
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}

