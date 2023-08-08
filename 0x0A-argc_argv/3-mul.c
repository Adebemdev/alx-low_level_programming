#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiplies two numbers
 * @argc: the size of the argv array, the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: 0 if successful
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("%s\n", argv[0]);
		return (1);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;
printf("The result of the multiplication:%d\n", result);
return (0);
}
