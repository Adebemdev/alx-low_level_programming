#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;
i = 0;
while (i < size)
{
if (i % 10)
{
printf(" ");
}
if (!(i % 10) && i)
{
printf("\n");
}
printf("0x%02x", buffer[i]);
i++;
}
printf("\n");
}
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