#include "main.h"
/**
 * _memset - filled the memory with a constant byte
 * @s: starting address of the memory to be filled
 * @b: the desired value
 * @n: member of byte to be changed
 *
 * Return: changed array with a new value for a byte
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s)
}
