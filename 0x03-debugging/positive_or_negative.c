#include"main.h"
/**
 * positive_or_negative (int i) - checks if the input number is positive,
 * negative or zero
 * Retrun: 0 on success
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf((int)i, ":d%\n is positive");
}
else if (i == 0)
{
printf((int)i, ":d%\n is zero");
}
else
{
printf((int)i, ":d%\n is negative");
}
}
