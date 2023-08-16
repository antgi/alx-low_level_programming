#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - IT will returns the sum of two numbers.
 * @a: Represents the first number.
 * @b: Represents the second number.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Will returns the difference of two numbers.
 * @a: Represents the first number.
 * @b: Represnets he second number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - This will returns the product of two numbers.
 * @a: Represents the first number.
 * @b: Represernts the second number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Will returns the division of two numbers.
 * @a: Represents the first number.
 * @b: Represents the second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - This will returns the remainder of the division of two numbers.
 * @a: Represent the first number.
 * @b: Represents the second number.
 *
 * Return: This is the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
return (a % b);
}
