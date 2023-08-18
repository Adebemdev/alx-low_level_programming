#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the argument to pass into the function
 * ...: The variable number of argument to calculate the sum of
 * Return: if n == 0 - 0
 * otherwise -  the sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
	return (0);
}
va_list mynum;
unsigned int i, sum = 0;
va_start(mynum, n);
for (i = 0; i < n; i++)
	sum += va_arg(mynum, int);
va_end(mynum);
return (sum);
}
