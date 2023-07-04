#include "main.h"
#include <stddef.h>
/**
 * _strchr - locate character in a string
 * @s: strng to search
 * @c: the character to search for
 * Return: a pointer to the first character
 * or NULL if there is no character
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
