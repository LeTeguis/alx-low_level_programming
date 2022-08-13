#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int (*op)(int, int) = get_op_func(argv[2]);

		if (op != 0)
			printf("%d\n", op(atoi(argv[1]), atoi(argv[3])));
		else
			printf("Error\n");
	}
	return (0);
}
