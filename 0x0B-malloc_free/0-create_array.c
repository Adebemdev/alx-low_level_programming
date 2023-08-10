#include <stdlib.h>
#include "main.h"
/**
 * create_array -function that createan array of chars,initializes it
 * with a specific char
 * @c: the character to put into the memory location
 * @size: the size of memory to create
 *
 * Return: a pointer to the array.
*/
char *create_array(unsigned int size, char c)
{
char *ptrArr;
unsigned int i;
	if (size == 0)
	{
		return (NULL);
	}
ptrArr = malloc(size * sizeof(char));
	if (ptrArr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptrArr[i] = c;
	}
return (ptrArr);
}
