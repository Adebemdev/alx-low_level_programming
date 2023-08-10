#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char
 * @c: the character to put into the memory location
 * @size: the size of memory to create
*/
char *create_array(unsigned int size, char c)
{
char *ptrArr;
unsigned int i;
ptrArr = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		ptrArr[i] = c;
	}
return (ptrArr);
}
