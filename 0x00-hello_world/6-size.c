#include <stdio.h>
/**
 * main - The program that print the various types on the computer
 * Return 0 (Success)
*/
int main(void)
{
	printf("The size of an int is %ld bytes.\n", sizeof(int));
	printf("The size of a float is a %ld bytes.\n", sizeof(float));
	printf("The size of a double is a %ld bytes.\n", sizeof(double));
	printf("The size of a char is a %ld bytes.\n", sizeof(char));
	printf("The size of a long int is %ld bytes.\n", sizeof(long int));
	printf("The size of a long long int is %ld bytes.\n", sizeof(long long int));
	return (0);
}
