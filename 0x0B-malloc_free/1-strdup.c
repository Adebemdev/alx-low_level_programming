#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 *  the string given as a parameter.
 *  @str: the string to duplicate
 *
 *  Return: To return pointer to the str.
*/
char *_strdup(char *str)
{
char *ptrStr;
int str_len = 0;
int i, count;
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		str_len++;
	}
	ptrStr = malloc(str_len * sizeof(char) + 1);
	if (ptrStr == NULL)
	{
		return (NULL);
	}
	for (count = 0; str[count] != '\0'; count++)
	{
		ptrStr[count] = str[count];
	}
	ptrStr[count] = '\0';
	return (ptrStr);
}
