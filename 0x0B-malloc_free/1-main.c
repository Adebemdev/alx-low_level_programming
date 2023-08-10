#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
*/
int main(void)
{
char *s;
s = _strdup("ALX SE");
if (s == NULL)
{
	printf("failed to allocate meory\n");
	return (1);
}
printf("%s\n", s);
return (0);
}
