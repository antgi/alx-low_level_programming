#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - This will return the sum of all the given parameteres
 * @n: Represents the number of parameters passed to the function
 * @...: Describes a varibale number of parameters to calcualte the sum
 *
 * Return: Will return 0 if n is equal to zero
 * Otherwise - the sum of all of the list of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list par;
unsigned int a, sum = 0;
va_start(par, n);
for (a = 0; a < n; a++)
sum + = va_arg(par, int);
va_end(par);
return (sum);
}
