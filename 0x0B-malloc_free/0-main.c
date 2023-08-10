#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
char *buffer;
buffer = create_array(98, 'H');
	if (buffer == NULL)
	{
		printf("fail to locate memory\n");
		return (1);
	}
	free(buffer);
	return (0);
}
