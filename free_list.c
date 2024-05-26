#include "list_lib.h"

int	free_list(t_list *list, t_node *node)
{
	ft_free(list->data, node);
	list->data = NULL;
	list->size = 0;
	list->capacity = 0;
	return (0);
}
