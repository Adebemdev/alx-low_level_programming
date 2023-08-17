#include <stdio.h>
#include "dog.h"
/**
* print_dog - A function to prints a struct dog
* @d: strct d
* Return: Always 0.
*/
void print_dog(struct dog *d)
{
char *name, *owner;
	if (d)
	{
		name = (*d).name;
		owner = (*d).owner;
		if (!name)
			name = "(nil)";
		if (!owner)
			owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, (*d).age, owner);
	}
}
