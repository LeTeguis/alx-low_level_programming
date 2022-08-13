#include "3-calc.h"

/**
 * get_op_func - get op
 *
 * @s: op
 *
 * Description: get the correct operator
 *
 * Return: the function operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{0, 0}
	};
	int i = 0;

	while (i < 5)
	{
		if (s[0] && s[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (0);
}
