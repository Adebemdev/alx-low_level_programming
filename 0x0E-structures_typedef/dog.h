#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - struct for dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_H */