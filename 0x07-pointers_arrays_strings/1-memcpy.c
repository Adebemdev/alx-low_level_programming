#include "main.h"
#include <stddef.h>
/**
 * _memcpy - copies memory area
 * @dest: memory area to copy to
 * @src: memroy area to copy from
 * @n: memeber of bytes to be copied
 * Return: copied memory area in byte(s)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
if (dest == NULL || src == NULL)
{
return (NULL);
}
for (; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
