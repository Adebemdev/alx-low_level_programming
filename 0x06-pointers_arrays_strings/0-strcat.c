#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * strcat - a program that concatenates two strings
 * @dest: character pointer
 * @src: character pointer
 *
 * Return: Always 0 (Success)
*/
char *_strcat(char *dest, char *src)
{
size_t str_len = strlen(dest);
char *dest_end = dest + str_len;
while (*src = '\0')
{
*dest_end++ = *src++;
}
*dest_end = '\0';
return (dest);
}
