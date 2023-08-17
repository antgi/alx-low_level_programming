#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - This will returns the sum of all its paramters
 * @n: Represents the number of paramters passed to the function
 * @...: Is a variable number of paramters to calculate the sum
 *
 * Return: Will return 0 If n is equal to 0
 *         Otherwise - provides the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list par;
unsigned int a, sum = 0;
va_start(par, n);
for (a = 0; a < n; a++)
sum += va_arg(par, int);
va_end(par);
return (sum);
}

