#include "list_lib.h"

int	init_list(t_list *list, enum types type, t_node *node)
{
	list->data = ft_calloc(INITIAL_CAPACITY, sizeof(void*), node);
	if (!list->data)
		return (1);
	list->size = 0;
	list->capacity = INITIAL_CAPACITY;
	list->type = type;
	return (0);
}
