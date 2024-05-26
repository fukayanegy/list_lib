#include <stdio.h>
#include <stdlib.h>
#include "list_lib.h"

int	main(void)
{
	t_list	list;
	t_node	node;
	int num0;
	int num1;
	int num2;
	int num3;
	int num4;

	num0 = 3;
	num1 = 1;
	num2 = 4;
	num3 = 1;
	num4 = 5;

	init_list(&list, INT, &node);
	append(&list, &num0, &node);
	append(&list, &num1, &node);
	append(&list, &num2, &node);
	append(&list, &num3, &node);
	append(&list, &num4, &node);

	printf("%d\n", *((int *)list.data[0]));
	printf("%d\n", *((int *)list.data[1]));
	printf("%d\n", *((int *)list.data[2]));
	printf("%d\n", *((int *)list.data[3]));
	printf("%d\n", *((int *)list.data[4]));

	free_list(&list, &node);
	return (0);
}
