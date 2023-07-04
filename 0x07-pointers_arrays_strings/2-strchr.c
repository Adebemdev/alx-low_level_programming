#include "main.h"
#include <stddef.h>
/**
 * _strchr -  locates a character in a string
 * @s: string to search
 * @c: character to search for
 * Return: a pointer to the first character
 * or NUlL if the character is not found
*/
char *_strchr(char *s, char c)
{
int i;
i = 0;
for (; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return (NULL);
}
