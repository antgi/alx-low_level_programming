#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - This will print strings,which followed by a new line
 * @separator: Describes the string to be printed between strings
 * @n: Represents the  number of strings passed to the function
 * @...: Represents the variable number of strings to be printed
 *
 * Description: In the case  separator is NULL, it is not printed
 *              When one of the strings if NULL, (nil) is printed instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list stg;
char *str;
unsigned int x;
va_start(stg, n);
for (x = 0; x < n; x++)
{
str = va_arg(stg, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (x != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(stg);
}
