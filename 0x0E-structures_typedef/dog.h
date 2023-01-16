#ifndef DOG_H
#define DOG_H

int _putchar(char c);

/**
*struct dog - Initialize struct dog
*@name:name type char
*@age: age type float
*@owner: name of owner type char
*
*Description: name, age and owner of a dog
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif
