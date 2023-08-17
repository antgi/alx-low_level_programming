#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - This will print anything
 * @format: Represents the list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *str, *sepa = "";
va_list list;
va_start(list, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sepa, va_arg(list, int));
break;
case 'i':
printf("%s%d", sepa, va_arg(list, int));
break;
case 'f':
printf("%s%f", sepa, va_arg(list, double));
break;
case 's':
str = va_arg(list, char *);
if (!str)
str = "(nil)";
printf("%s%s", sepa, str);
break;
default:
i++;
continue;
}
sepa = ", ";
i++;
}
}
printf("\n");
va_end(list);
}
