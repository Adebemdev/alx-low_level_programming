#include <stdio.h>
/**
 * main - The program that print the various types on the computer
 * Return 0 (Success)
*/
int main(void)
{
	printf("The size of an int is %d bytes.\n", sizeof(int));
	printf("The size of a float is a %f bytes.\n", sizeof(float));
	printf("The size of a double is a %d bytes.\n", sizeof(double));
	printf("The size of a char is a %d bytes.\n", sizeof(char));
	return (0);
}
