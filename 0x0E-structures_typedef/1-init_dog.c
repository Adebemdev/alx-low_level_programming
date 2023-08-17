#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: a declared pointer variable of type struct dog
 * @name: memeber name
 * @age: memeber age
 * @owner: member owner
 * Return: inialized struct
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
