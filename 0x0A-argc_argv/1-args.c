#include <stdio.h>
#include "main.h"
/**
 * main - outputs the  number of arguments passed into it.
 * @argc: the argument count
 * @argv: the argument vector taking the one dimensional array
 *
 * Return: Always returns (0) Success
 */
int main(int argc, char* argv[])
{
(void) argv; 
printf("%d\n", argc - 1);
return (0);
}
