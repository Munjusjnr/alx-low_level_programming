#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - addition funtion
 * @a: first operand
 * @b: second operand
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substraction function
 * @a: first operand
 * @b: second operand
 * Return: substracted value
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication value
 * @a: first operand
 * @b: second operand
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division function
 * @a: first operand
 * @b: second operand
 *  Return: divided value
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - A remainder function
 * @a: first operand
 * @b: second operand
 * Return: remainder value
 */
int op_mod(int a, int b)
{
	return (a % b);
}
