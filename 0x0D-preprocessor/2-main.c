#include <stdio.h>
/**
 * main - Program to print a file from where it was compiled from
 *
 * Return: Always 0.
*/
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
