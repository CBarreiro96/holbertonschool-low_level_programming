#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
*op_add - Sum number
*@a: Variable type integer
*@b:Variable type integer
*Return: return result.
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - Diference number
*@a: Variable type integer
*@b:Variable type integer
*Return: return result.
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - multiplicer number
*@a: Variable type integer
*@b:Variable type integer
*Return: return result.
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - divide number
*@a: Variable type integer
*@b:Variable type integer
*Return: return result.
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit (100);
	}

	return (a / b);
}

/**
*op_mod - mod number
*@a: Variable type integer
*@b:Variable type integer
*Return: return result.
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit (100);
	}
	return (a % b);
}
