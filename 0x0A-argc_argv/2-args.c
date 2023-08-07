
#include <stdio.h>
/**
 * main - function prints all arguments it receives
 * @argc: the size of the argv array, the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
int i;
	printf("Number of arguments: %d\n", argc - 1);
	for (i = 0; i < argc; i++)
	{
	printf("Argument %d: %s\n", i, argv[i]);
	}
	return (0);
}
