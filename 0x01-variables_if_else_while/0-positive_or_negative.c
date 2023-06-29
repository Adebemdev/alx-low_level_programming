#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - To assign a random number to the variable n each time it is executed
 * and to check if the number stored in the variable n is positive or negative
 * Return: always 0 (Success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("n is positive: %d\n", n);
}
else if (n == 0)
{
printf("n is zero: %d\n", n);
}
else
{
printf("n is negative: %d\n", n);
}
return (0);
}
