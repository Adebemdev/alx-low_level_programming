#include "main.h"
/**
 * strlen - returns the length of a string
 * @s: string
 * Return: length
*/
int _strlen(char *s)
{
int length = 0;
for (char *c = string; *c != '\0'; c++)
{
length++;
}
return (length);
}
